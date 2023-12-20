#ifndef THEEND_H
#define THEEND_H

#include <QDialog>

namespace Ui {
class TheEnd;
}

class TheEnd : public QDialog
{
    Q_OBJECT

public:
    explicit TheEnd(QWidget *parent = nullptr);
    ~TheEnd();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TheEnd *ui;
};

#endif // THEEND_H
