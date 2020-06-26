#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete webWindow;
}

void MainWindow::changeText()
{
    QString Cnt = QString::number(counter++);
    ui->text->setText(Cnt);

}

void MainWindow::on_openButton_clicked()
{
    webWindow = new Feeder();
    QObject::connect(webWindow, SIGNAL(buttonPressed()), this, SLOT(changeText()));
    webWindow->show();
}
