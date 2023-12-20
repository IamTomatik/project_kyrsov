#include "theend.h"
#include "ui_theend.h"
#include <QMessageBox>

TheEnd::TheEnd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TheEnd)
{
    ui->setupUi(this);
}

void TheEnd::on_pushButton_clicked()
{
    qApp->quit();
}


void TheEnd::on_pushButton_2_clicked()
{
    reject();
}


TheEnd::~TheEnd()
{
    delete ui;
}
