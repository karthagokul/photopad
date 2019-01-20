#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "canvas.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Canvas *c=new Canvas();
    setCentralWidget(c);
}

MainWindow::~MainWindow()
{
    delete ui;
}
