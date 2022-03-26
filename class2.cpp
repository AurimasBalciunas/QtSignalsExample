#include "class2.h"
#include "ui_class2.h"
#include <QObject>

Class2::Class2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Class2)
{
    ui->setupUi(this);
}

Class2::~Class2()
{
    delete ui;
}

void Class2::receiveSignal1(int count)
{
    ui->plainTextBox1->setPlainText(QString::number(count));
}
