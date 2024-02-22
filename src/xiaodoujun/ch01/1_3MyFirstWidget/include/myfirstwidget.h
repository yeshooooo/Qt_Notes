//
// Created by yeshooo on 2024/2/22.
//

#ifndef MYFIRSTWIDGET_H
#define MYFIRSTWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MyFirstWidget; }
QT_END_NAMESPACE

class MyFirstWidget : public QWidget {
Q_OBJECT

public:
    explicit MyFirstWidget(QWidget *parent = nullptr);
    ~MyFirstWidget() override;

private:
    Ui::MyFirstWidget *ui;
};


#endif //MYFIRSTWIDGET_H
