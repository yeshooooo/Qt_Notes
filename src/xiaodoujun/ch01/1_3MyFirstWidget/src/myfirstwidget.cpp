//
// Created by yeshooo on 2024/2/22.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MyFirstWidget.h" resolved

#include "myfirstwidget.h"
#include "ui_MyFirstWidget.h"


MyFirstWidget::MyFirstWidget(QWidget *parent) :
    QWidget(parent), ui(new Ui::MyFirstWidget) {
    ui->setupUi(this);
}

MyFirstWidget::~MyFirstWidget() {
    delete ui;
}
