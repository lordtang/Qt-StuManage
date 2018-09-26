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
//    qDebug()<<name;
//    qDebug()<<id;
//    QMessageBox msgBox;                                //提示信息窗口
//     msgBox.setText("请确认信息：");
//     msgBox.setInformativeText(name+'\n'+id + '\n');
//     QPushButton * cbtn = msgBox.addButton("确定",QMessageBox::AcceptRole);
//     msgBox.addButton("取消",QMessageBox::RejectRole);
//     msgBox.setDefaultButton(cbtn);
//     int ret = msgBox.exec();
//     QMessageBox::aboutQt(this,"what the fuck?");
    int ret = QMessageBox::information(this,"are you sure?",content,"确认","取消");
   qDebug()<<ret;
   switch (ret) {
       case QMessageBox::Save:
           // Save was clicked
           break;
       case QMessageBox::Cancel:
           // Cancel was clicked
           break;
       default:
           // should never be reached
           break;
     }
}

void addStu::on_btn_close_clicked()
{
    this->close();

}
