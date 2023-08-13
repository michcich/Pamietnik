#include "a.h"
#include "mainwindow.h"

Program::Program()
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


void Program::wspomnieniaZapisTxt()
{
    m_MyFile.close();
    if(m_MyFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream outStream(&m_MyFile);
        for(Pamietnik el : m_list)
            {
                QString value = el.getEntry();
                outStream << value << '\n';
            }
        m_MyFile.close();
    }
}

void Program::wspomnieniaOdczytTxt()
{
    m_list.clear();
        if(m_MyFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream file(&m_MyFile);
            while(!file.atEnd())
            {
                QDateTime line = QDateTime::fromString(file.readLine());
                QString line2 = file.readLine();
                Pamietnik entry(line2, line);
                setAddList(entry);
            }
               pozycja = m_list.begin();
               //emit wyswietlanie();
        }

        m_MyFile.close();
}

void Program::fileSelectedLike(QString in_fileName)
{
    static QString fileName = " ";
    if(!in_fileName.isEmpty())
            fileName = in_fileName;
    bool noEmpty = !fileName.isEmpty();
    if(noEmpty){
    m_MyFileLike.setFileName(fileName);
    }
}

QString Program::ulubionaPozycycja()
{
    return pozycja->getEntry();
}

void Program::setPozycja(QList<Pamietnik>::iterator a)
{
    pozycja = a;
}

void Program::wspomnieniaZapisLike()
{
    m_MyFileLike.close();
    if(m_MyFileLike.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream outStream(&m_MyFileLike);
                outStream << pozycja->getEntry() << '\n';
        m_MyFileLike.close();
    }
}

void Program::wspomnieniaOdczytLike()
{
    if(m_MyFileLike.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream file(&m_MyFileLike);
        while(!file.atEnd())
        {
            QDateTime line = QDateTime::fromString(file.readLine());
            QString line2 = file.readLine();
            Pamietnik entry(line2, line);
            //emit wyswietlanie(entry);
        }
    }

    m_MyFileLike.close();
}


void Program::setAddList(Pamietnik p)
{
     QList<Pamietnik >::iterator iter = m_list.begin();
     while(iter != m_list.end()){
         if(*iter == p){
             std::replace(m_list.begin(), m_list.end(),*iter,p);
             break;
         }
         iter++;
     }
     if(iter == m_list.end())
         m_list.append(p);
     std::sort(m_list.begin(),m_list.end());
     pozycja = std::find(m_list.begin(),m_list.end(),p);
}
void Program::usuwanie()
{
    m_MyFileLike.remove();
}

void Program::usuwanieBtn()
{
    if(pozycja >= m_list.begin() && pozycja < m_list.end()){
        m_list.erase(pozycja);
        //emit wyswietlanie();
    }
}
