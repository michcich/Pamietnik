#ifndef WPISY_H
#define WPISY_H

#include <QObject>

class Wpisy : public QObject
{
    Q_OBJECT
public:
    explicit Wpisy(QObject *parent = nullptr);

signals:

};

#endif // WPISY_H
