#ifndef SUCCESSLABEL_H
#define SUCCESSLABEL_H

#include <QLabel>

class SuccessLabel : public QLabel
{
    Q_OBJECT
public:
    explicit SuccessLabel(QWidget *parent = nullptr);

public slots:
    void succes(QString message);

};

#endif // SUCCESSLABEL_H
