#include "pamietnik.h"
#include "program.h"

QList<Pamietnik> Pamietnik::m_entries = {};
QList<Pamietnik> Pamietnik::m_entriesShow = {};
QList<Pamietnik>::iterator Pamietnik::postition = m_entries.begin();
QList<Pamietnik>::iterator Pamietnik::favorite= m_entries.begin();
QString Pamietnik::previousEntry = "",
        Pamietnik::currentEntry= "",
        Pamietnik::nextEntry= "";
QString bWsp = QString("<span style ='color:#ff0000; font:bold;'>%1</span>").arg("Brak Wspomnien");

Pamietnik::Pamietnik(QString dane,QDateTime data , QString mood)
    :m_data(data),m_mood(mood)
{
    m_content = data.toString()+ "\n" + mood + "\n" + dane;
}
bool Pamietnik::operator>(const Pamietnik& rhs){
    return (m_data > rhs.m_data);
}
bool Pamietnik::operator<(const Pamietnik& rhs){
    return (m_data < rhs.m_data);
}
bool Pamietnik::operator!=(const Pamietnik& rhs) const{
    return !(*this == rhs);
}
bool Pamietnik::operator==(const Pamietnik& rhs) const{
    if(this != &rhs)
        return (m_data == rhs.m_data);
    return true;
}

QString Pamietnik::favoriteEntries()
{
    return postition->getEntry();
}

void Pamietnik::setAddList(Pamietnik p)
{
     QList<Pamietnik>::iterator iter = m_entries.begin();
     while(iter != m_entries.end()){
         if(*iter == p){
             std::replace(m_entries.begin(), m_entries.end(),*iter,p);
             break;
         }
         iter++;
     }
     if(iter == m_entries.end())
         m_entries.append(p);
     std::sort(m_entries.begin(),m_entries.end());
     postition = std::find(m_entries.begin(),m_entries.end(),p);
}

void Pamietnik::deleteEntries()
{
    if(postition == m_entries.begin() && (postition + 1) == m_entries.end()){
        m_entries.clear();
        previousEntry = "";
        currentEntry= "";
        nextEntry= "";
        return;
    }
    if(postition > m_entries.begin() && postition < m_entries.end())
        m_entries.erase(postition);
}

void Pamietnik::previousShow()
{    
    if(postition != nullptr){
        if((postition - 1) >= m_entries.begin()){
            nextEntry = postition->getEntry();
            postition--;
            currentEntry = postition->getEntry();
            if((postition - 1) >= m_entries.begin())
                previousEntry = (postition - 1)->getEntry();
            else
                previousEntry = bWsp;
        }
    }
}

void Pamietnik::nextShow()
{
    if(postition != nullptr){
        if((postition + 1) < m_entries.end()){
            previousEntry = postition->getEntry();
            postition++;
            currentEntry = postition->getEntry();
            if((postition + 1) == m_entries.end())
                nextEntry = bWsp;
            else
                nextEntry = (postition + 1)->getEntry();
         }
    }
}

void Pamietnik::display(QList<Pamietnik> &list)
{
    if(list.size() > 0){
           currentEntry = postition->getEntry();

           if((postition - 1) >= list.begin())
               previousEntry = (postition - 1)->getEntry();
           else
               previousEntry = bWsp;

           if((postition + 1) == list.end())
               nextEntry = bWsp;
           else
               nextEntry = (postition + 1)->getEntry();
      }
}

void Pamietnik::displaySelect(int i)
{
    m_entriesShow.clear();
    if(i == 1){
        for(Pamietnik el : m_entries)
            {
                if(el.getMood() == "neutralne")
                    m_entriesShow.append(el);
            }
        postition = m_entriesShow.begin();
     }
    else if(i == 2){
        for(Pamietnik el : m_entries)
            {
                if(el.getMood() == "radosne")
                    m_entriesShow.append(el);
            }
        postition = m_entriesShow.begin();
     }
    else if(i == 3){
        for(Pamietnik el : Pamietnik::m_entries)
            {
                if(el.getMood() == "smutne")
                    m_entriesShow.append(el);
            }
        postition = m_entriesShow.begin();
     }
    else if(i == 4){
        postition = m_entries.begin();
        display();
     }
    display(m_entriesShow);
}
