#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}


void Dialog::on_buttonBox_accepted()
{
    if (ui ->Familia -> text().isEmpty() || ui ->Name -> text().isEmpty() ||ui ->LName -> text().isEmpty() ||
        ui ->Year -> text().isEmpty() ||ui ->Height -> text().isEmpty() ||ui ->Weight -> text().isEmpty()){
        QMessageBox::critical(this, "Ошибка", "Заполните все поля!");
    }else{
      accept();
    }
}
void Dialog::on_buttonBox_rejected()
{
    reject();
}

QString Dialog:: Familia() const{

    return ui-> Familia ->text();
}

QString Dialog:: Name() const{

    return ui ->Name ->text() ;
}

QString Dialog::LastName() const{

    return  ui ->LName -> text();
}

QString Dialog:: BirthYear() const{

    return ui -> Year -> text();
}

QString Dialog:: Height() const{

    return ui -> Height -> text();
}

QString Dialog:: Weight() const{

    return ui ->Weight -> text();
}

Dialog::~Dialog()
{
    delete ui;
}
