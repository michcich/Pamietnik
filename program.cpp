#include "program.h"
#include "pamietnik.h"
#include "dialog.h"

Program::Program(QObject *parent)
    : QObject(parent)
{
}

void Program::fileSelected(QString in_fileName)
{
    static QString fileName = " ";
    if(!in_fileName.isEmpty())
            fileName = in_fileName;
    bool noEmpty = !fileName.isEmpty();
    if(noEmpty){
        m_MyFile.setFileName(fileName);
    }
}


void Program::fileSave(QString in_fileName)
{
    QFile file(in_fileName);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream outStream(&file);
        for(Pamietnik el : Pamietnik::m_entries)
            {
                QString value = el.getEntry();
                outStream << value << '\n';
            }
        file.close();
    }
}

void Program::fileRead(QString in_fileName)
{
    QFile file(in_fileName);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            while(!file.atEnd())
            {
                QDateTime line = QDateTime::fromString(file.readLine());
                QString line2 = file.readLine();
                QString line3 = file.readLine();
                Pamietnik entry(line3, line, line2);
                Pamietnik::setAddList(entry);
            }
               Pamietnik::postition = Pamietnik::m_entries.begin();
               show();
        }

        file.close();
}


void Program::addDialog()
{
    DialogData data;
    m_Dialog = new Dialog(data,nullptr);
    int result = m_Dialog->exec();
    if(result){
        Pamietnik entry(data.text, data.data, data.mood);
        Pamietnik::setAddList(entry);
        show();
    }
}

void Program::show()
{
    Pamietnik::display();
    emit showEntries(Pamietnik::previousEntry,Pamietnik::currentEntry,Pamietnik::nextEntry);
}

void Program::showSelect(int i)
{
    Pamietnik::displaySelect(i);
    emit showEntries(Pamietnik::previousEntry,Pamietnik::currentEntry,Pamietnik::nextEntry);
}

void Program::previous()
{
     Pamietnik::previousShow();
     emit showEntries(Pamietnik::previousEntry,Pamietnik::currentEntry,Pamietnik::nextEntry);
}

void Program::next()
{
    Pamietnik::nextShow();
    emit showEntries(Pamietnik::previousEntry,Pamietnik::currentEntry,Pamietnik::nextEntry);
}

QString Program::favoritePosition()
{
    return Pamietnik::favoriteEntries();
}

void Program::deleteEntry()
{
    Pamietnik::deleteEntries();
    show();
}





