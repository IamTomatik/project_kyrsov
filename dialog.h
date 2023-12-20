#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    QString Familia() const;
    QString Name() const;
    QString LastName() const;
    QString BirthYear() const;
    QString Height() const;
    QString Weight() const;

private slots:
    void on_buttonBox_accepted(); //согласие

    void on_buttonBox_rejected(); //отказ

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
