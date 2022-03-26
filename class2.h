#ifndef CLASS2_H
#define CLASS2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Class2; }
QT_END_NAMESPACE

class Class2 : public QMainWindow
{
    Q_OBJECT

public:
    Class2(QWidget *parent = nullptr);
    ~Class2();

private:
    Ui::Class2 *ui;

private slots:
    void receiveSignal1(int);
};
#endif // CLASS2_H
