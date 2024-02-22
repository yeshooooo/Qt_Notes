//
// Created by yeshooo on 2024/2/22.
//
#include <QApplication>
#include <myfirstwidget.h>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    MyFirstWidget w;
    w.show();
    return a.exec();
}