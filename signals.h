#ifndef SIGNALS_H
#define SIGNALS_H

#include <QObject>

class Signals : public QObject
{
        Q_OBJECT

public:
    Signals();
    virtual ~Signals() {};

signals:
    void valueChanged(char newString);
};

#endif // SIGNALS_H
