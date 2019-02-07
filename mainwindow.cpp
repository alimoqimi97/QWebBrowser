#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_pressed()
{
    QString address = ui->lineEdit->text();

//    ui->webView->setUrl(address);
    ui->webView->load(QUrl(address));
}

void MainWindow::on_pushButton_5_pressed()
{
    this->close();
}
