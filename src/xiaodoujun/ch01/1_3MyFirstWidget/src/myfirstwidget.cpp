//
// Created by yeshooo on 2024/2/22.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MyFirstWidget.h" resolved

#include "myfirstwidget.h"
#include "ui_MyFirstWidget.h"

// 因为此文件有中文，添加bom并添加下面的宏
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
# pragma execution_character_set("utf-8")
#endif

MyFirstWidget::MyFirstWidget(QWidget *parent) :
    QWidget(parent), ui(new Ui::MyFirstWidget) {
    ui->setupUi(this);
    ui->lineEdit->setText("你好，Qt！");
}

MyFirstWidget::~MyFirstWidget() {
    delete ui;
}
