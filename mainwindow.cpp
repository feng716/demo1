#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newlabel.h"
#include "option.h"
#include "successlabel.h"
#include <QPushButton>
#include <QFile>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_2->setText("");
    ui->label->setText(ui->label->loadtopic());
    this->setWindowIcon(QIcon(":/img/icon128.ico"));
    /*ui->A->setFont(QFont("微软雅黑",28));
    ui->B->setFont(QFont("微软雅黑",28));
    ui->C->setFont(QFont("微软雅黑",28));
    ui->D->setFont(QFont("微软雅黑",28));*/
    connect(ui->loadqss,&QPushButton::clicked,this,&MainWindow::loadStyleSheet);
    loadStyleSheet();
    //connect(ui->B,&option::clicked,ui->label,&newlabel::NappendNum);
    connect(ui->B,&option::clicked,ui->B,&option::emitname);
    connect(ui->B,&option::name,ui->label,&newlabel::NappendNum);
    connect(ui->A,&option::clicked,ui->A,&option::emitname);
    connect(ui->A,&option::name,ui->label,&newlabel::NappendNum);
    connect(ui->C,&option::clicked,ui->C,&option::emitname);
    connect(ui->C,&option::name,ui->label,&newlabel::NappendNum);
    connect(ui->D,&option::clicked,ui->D,&option::emitname);
    connect(ui->D,&option::name,ui->label,&newlabel::NappendNum);
    connect(ui->label,&newlabel::showSuccess,ui->label_2,&SuccessLabel::succes);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadStyleSheet(){
    QFile file("./Qss.qss");
    file.open(QFile::ReadOnly);
    if(file.isOpen()){
        this->setStyleSheet(file.readAll());
        file.close();
    }
    else
        qDebug()<<"error:load";
}


