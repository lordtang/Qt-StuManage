#include "addstu.h"
#include "ui_addstu.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

addStu::addStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addStu)
{
    ui->setupUi(this);
}

addStu::~addStu()
{
    delete ui;
}

void addStu::on_btn_ok_clicked()
{
    QString name = this->ui->le_name->text();          //获取姓名
    QString id = this->ui->le_id->text();
    QString content = name+'\n'+id;

    if(name.length()<=1||id.length()!=12)
    {
        QMessageBox::critical(this,"false","please cheak your information");
    }else
    {
        int ret = QMessageBox::information(this,"are you sure?",content,"确认","取消");
    }
}

void addStu::on_btn_close_clicked()
{
    this->close();

}

