#include "class1.h"
#include "ui_class1.h"
#include <QObject>

Class1::Class1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Class1)
{
    ui->setupUi(this);
    count = 0;
}

Class1::~Class1()
{
    delete ui;
}

void Class1::on_testButton_clicked()
{
    count = count+1;
    emit sendSignal1(count);
}
