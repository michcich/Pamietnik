#ifndef PROGRAM_H
#define PROGRAM_H
#include "dialog.h"
#include <QObject>
#include <QString>
#include <QFile>
#include <QDate>
#include <QListWidgetItem>
#include <algorithm>
#include <QFileDialog>
#include <QTextStream>

class MainWindow;
class Pamietnik;


class Program : public QObject
{
    Q_OBJECT
public:
    explicit Program(QObject *parent = nullptr);
    void setGUI(MainWindow *ui = nullptr) {GUI = ui;}
    void fileSelected(QString fileName);
    void addDialog();
    void show();
    void showSelect(int);
    void previous();
    void next();
    QString favoritePosition();
    void deleteEntry();
    void fileRead(QString);
    void fileSave(QString);
signals:
    void showEntries(QString,QString,QString);
private:
    MainWindow *GUI= nullptr;
    QFile m_MyFile;
    Dialog *m_Dialog;
};

#endif // PROGRAM_H
