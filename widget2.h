#ifndef WIDGET2_H
#define WIDGET2_H

#include <QDialog>

namespace Ui {
class widget2;
}

class widget2 : public QDialog
{
    Q_OBJECT

public:
    explicit widget2(QWidget *parent = nullptr);
    ~widget2();

private slots:
    void on_add_clicked();

    void on_remove_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::widget2 *ui;
    int row;
    enum Group
    {
        familia, name, lastname, birthyear,height,weight
    };
};

#endif // WIDGET2_H
