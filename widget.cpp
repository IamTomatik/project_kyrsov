#include "widget.h"
#include "ui_widget.h"
#include <widget2.h>


Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    hide();
    widget2 ButVhod;
    ButVhod.setModal(true);
    ButVhod.exec();
}

