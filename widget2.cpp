#include "widget2.h"
#include "ui_widget2.h"
#include "dialog.h"
#include <QMessageBox>
#include <theend.h>
#include <QTextEdit>
#include <QTextStream>
#include <QSpinBox>
using namespace std;

widget2::widget2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::widget2)
{
    ui->setupUi(this);
}

void widget2::on_add_clicked()
{
    QString Familia;
    QString Name;
    QString LastName;
    QString BirthYear;
    QString Height;
    QString Weight;
    int st;

    Dialog elem;
    elem.setModal(true);
    st = elem.exec();

    if (st == QDialog::Rejected){
        return;
    }

    Familia = elem.Familia();
    Name = elem.Name();
    LastName = elem.LastName();
    BirthYear = elem.BirthYear();
    Height = elem.Height();
    Weight = elem.Weight();

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,familia, new QTableWidgetItem(Familia));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,name, new QTableWidgetItem(Name));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,lastname, new QTableWidgetItem(LastName));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,birthyear, new QTableWidgetItem(BirthYear));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,height, new QTableWidgetItem(Height));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,weight, new QTableWidgetItem(Weight));
}

void widget2::on_remove_clicked()
{
    if (ui->tableWidget->rowCount() == 0) {
        QMessageBox::critical(this, "Ошибка", "Таблица пуста!");
    }else{
        ui->tableWidget->removeRow(row);
    }
}

void widget2::on_tableWidget_clicked(const QModelIndex &index)
{
    row=index.row();
}

void widget2::on_pushButton_clicked()
{
    TheEnd end;
    end.setModal(true);
    end.exec();
}

widget2::~widget2()
{
    delete ui;
}
