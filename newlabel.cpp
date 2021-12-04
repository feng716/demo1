#include "newlabel.h"
#include <QDebug>
#include <QFile>
#include <QString>
newlabel::newlabel(QWidget *parent) : QLabel(parent),topicindex(0){
    loadanswer();
}
void newlabel::NappendNum(QString message){
    qDebug()<<message<<topicindex;
    if(topicindex<topics.size()){
        if(message==answer[topicindex])
            emit showSuccess("good job");
        else
            emit showSuccess("Don't worry");
        topicindex++;
        if(topicindex < topics.size())
            this->setText(topics[topicindex]);
    }
}
QString newlabel::loadtopic(){
    QString k = "";
    QFile file("./topic.txt");
    file.open(QFile::ReadOnly);
    if(file.isOpen()){
        QString a;
        for (int i = 0; i<=4;i++) {
            k += file.readLine();
        }
        topics.append(k);
        while(!file.atEnd()){
            a = "";
            for (int i = 0;i<=4;i++) {
                a += file.readLine();
            }
            topics.append(a);
        }
    }
    file.close();
    return k;
}
void newlabel::loadanswer(){
    QFile file("./answer.txt");
    file.open(QFile::ReadOnly);
    if(file.isOpen()){
        QString a = file.readAll();
        for (int i = 0;i<=a.length();i++) {
            answer.append(a.mid(i,1));
        }
    }
}
