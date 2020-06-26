#include "feeder.h"
#include "ui_feeder.h"

Feeder::Feeder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Feeder)
{
    ui->setupUi(this);
}

Feeder::~Feeder()
{
    delete ui;
}


void Feeder::on_pushButton_clicked()
{
    emit buttonPressed();
}

void Feeder::on_pushButton_2_clicked()
{
    this->close();
}
