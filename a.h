#ifndef PROGRAM_H
#define PROGRAM_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QDate>
#include <QListWidgetItem>
#include <algorithm>

class MainWindow;
class Pamietnik;

class Program: public QObject
{
    Q_OBJECT
public:
    Program();
    void setGUI(MainWindow *ui = nullptr) {GUI = ui;}
    void wspomnieniaZapisTxt();
    void wspomnieniaOdczytTxt();
    void wspomnieniaZapisLike();
    void wspomnieniaOdczytLike();
    void setAddList(Pamietnik p);
    void usuwanie();
    void usuwanieBtn();
    void fileSelected(QString fileName);
    void fileSelectedLike(QString fileName);
    QString ulubionaPozycycja();
    QList<Pamietnik>::iterator getPozycja() {return pozycja;};
    QList<Pamietnik> getList() {return m_list;}
    void setPozycja(QList<Pamietnik>::iterator);
signals:
    void wyswietlanie();
private:
    QList<Pamietnik>::iterator pozycja;
    QList<Pamietnik>::iterator ulubiony;
    MainWindow *GUI= nullptr;
    QFile m_MyFile;
    QFile m_MyFileLike;
    QList<Pamietnik> m_list;
};

#endif // PROGRAM_H
