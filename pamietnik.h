#ifndef PAMIETNIK_H
#define PAMIETNIK_H
#include <QString>
#include <QDate>

class MainWindow;

class Pamietnik
{
    QString m_content  = "";
    QDateTime m_data;
    QString m_mood = "";
public:
    Pamietnik(QString dane,QDateTime data, QString mood);

    bool operator>(const Pamietnik& rhs);
    bool operator<(const Pamietnik& rhs);
    bool operator!=(const Pamietnik& rhs) const;
    bool operator==(const Pamietnik& rhs) const;

    QString getEntry(){return m_content;}
    QDateTime getData(){ return m_data;}
    QString getMood(){return m_mood;}

    static QList<Pamietnik> m_entries;
    static QList<Pamietnik> m_entriesShow;
    static QList<Pamietnik>::iterator postition;
    static QList<Pamietnik>::iterator favorite;

    static QString previousEntry,currentEntry,nextEntry;

    static QString favoriteEntries();

    static void setAddList(Pamietnik p);

    static void deleteEntries();

    static void nextShow();
    static void previousShow();
    static void display(QList<Pamietnik> &list = m_entries);
    static void displaySelect(int i);
};

#endif // PAMIETNIK_H
