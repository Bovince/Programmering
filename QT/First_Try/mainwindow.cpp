#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Vad som ska hända när programmet startas
    ui->setupUi(this);
    connect(ui->searchButton, SIGNAL(clicked()), this, SLOT(search()));

}

void MainWindow::search()
{
    QString s = ui->lineEdit->text();

}

MainWindow::~MainWindow()
{
    delete ui;
}
