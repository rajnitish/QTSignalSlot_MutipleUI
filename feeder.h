#ifndef FEEDER_H
#define FEEDER_H

#include <QDialog>

namespace Ui {
class Feeder;
}

class Feeder : public QDialog
{
    Q_OBJECT

public:
    explicit Feeder(QWidget *parent = 0);
    ~Feeder();

signals:
    void buttonPressed();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Feeder *ui;
};

#endif // WEBSITE_H
