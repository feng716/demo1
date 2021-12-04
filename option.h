#ifndef OPTION_H
#define OPTION_H
#include<QPushButton>
#include <QWidget>
#include <QString>
class option : public QPushButton{
    Q_OBJECT
signals:
    void name(QString message);
public:
    QString k;
    option(QWidget *Wight);
    void emitname();
    void mousePressEvent(QMouseEvent *event);
    //void paintEvent(QPaintEvent *event);
};

#endif // OPTION_H
