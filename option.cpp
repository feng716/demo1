#include"option.h"
#include <QPushButton>
#include <QWidget>
#include <QDebug>
#include <QString>
#include <QMouseEvent>
#include <QPainter>
option::option(QWidget *Widget):QPushButton(Widget),k("1231"){}
void option::emitname(){
    emit name(objectName());
}
void option::mousePressEvent(QMouseEvent *event){
    QPushButton::mousePressEvent(event);
}
/*void option::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawEllipse(0,0,10,10);
    painter.drawRect(0,0,100,50);
}*/
