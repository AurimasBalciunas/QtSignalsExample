#ifndef CLASS1_H
#define CLASS1_H

#include <QMainWindow>
#include "signals.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Class1; }
QT_END_NAMESPACE

class Class1 : public QMainWindow
{
    Q_OBJECT

public:
    Class1(QWidget *parent = nullptr);
    ~Class1();

signals:
    void sendSignal1(int);

private:
    Ui::Class1 *ui;
    int count;

private slots:
    void on_testButton_clicked(); //slots for pushbuttons are on_buttonName_clicked
};
#endif // CLASS1_H
