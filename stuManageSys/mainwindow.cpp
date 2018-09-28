#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addstu.h"
#include "querystu.h"

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

void MainWindow::on_actionaddStu_triggered()
{
    //this->close();
   // addStu a;
    //a.exec();//相当于死循环，程序被堵塞在这儿。后边的窗口不能点击
    a.show();//对象不会被销毁
}

void MainWindow::on_actionqueryStu_triggered()
{

    QueryStu questu;
    questu.exec();
}
