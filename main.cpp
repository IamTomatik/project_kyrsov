#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    a.setWindowIcon(QIcon("C:/QT/QTproject/KP1/iconka.png"));
    return a.exec();
}
