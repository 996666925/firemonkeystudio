﻿#include "Form_Index.h"
#include "ui_Form_Index.h"
#include "Form_WorkSpace.h"
#include "QTimer"

Form_Index::Form_Index(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Index)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint); //去除边框，并且显示在最前面

    timer = new QTimer;
    connect(timer,&QTimer::timeout,[this](){
        //this->close(); //关闭本窗口
        Form_WorkSpace* ws = new Form_WorkSpace;
        ws->show();
        delete this;
    });
    timer->start(3000);
}

Form_Index::~Form_Index()
{
    timer->stop();
    delete timer;
    delete ui;
}

