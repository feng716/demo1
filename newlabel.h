#ifndef NEWLABEL_H
#define NEWLABEL_H

#include <QLabel>

class newlabel : public QLabel
{
    Q_OBJECT
private:
    int topicindex;
    QVector <QString> topics;
    QVector <QString> answer;
public:
    explicit newlabel(QWidget *parent = nullptr);
    QString loadtopic();
    void loadanswer();
public slots:
    void NappendNum(QString message);
signals:
    void showSuccess(QString isSuccess);
};

#endif // NEWLABEL_H
