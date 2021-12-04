#include "successlabel.h"
#include <QEventLoop>
#include <QTimer>
SuccessLabel::SuccessLabel(QWidget *parent) : QLabel(parent)
{
}
void SuccessLabel::succes(QString message){
    this->setText(message);
    QEventLoop k;
    QTimer::singleShot(1000,&k,SLOT(quit()));
    k.exec();// a good way to sleep time
    this->setText("");
}
