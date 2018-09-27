#include "querystu.h"
#include "ui_querystu.h"

QueryStu::QueryStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QueryStu)
{
    ui->setupUi(this);
}

QueryStu::~QueryStu()
{
    delete ui;
}
