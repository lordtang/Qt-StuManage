#include "addstu.h"
#include "ui_addstu.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>
#include <QList>
#include <QAbstractButton>
#include <QCheckBox>

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
    QString sex = this->ui->sexGroup->checkedButton()->text();
    QString age = this->ui->cbb_age->currentText();
    QString dev = this->ui->cbb_school->currentText();

    QList<QAbstractButton *> ins_list = this->ui->insGroup->buttons();
    QString ins;
    int i = 0;
    for(i = 0;i<ins_list.length();i++)
    {
        QAbstractButton * che = ins_list.at(i);
        if(che->isChecked()){
            ins+=che->text()+',';
        }
    }
    if(name.length()<=1||id.length()!=12)
    {
        QMessageBox::critical(this,"false","please cheak your information");
    }else
    {
        QString content = name+'\n'+id+'\n'+age+'\n'+dev+'\n'+sex+'\n'+ins;
        int ret = QMessageBox::information(this,"are you sure?",content,"确认","取消");
        if(ret ==0)
        {
            clearUserInterface();
        }
    }
}

void addStu::on_btn_close_clicked()
{
    this->close();

}

void addStu::clearUserInterface()
{
    this->ui->le_name->clear();
    this->ui->le_id->clear();
    this->ui->rbtn_mail->setChecked(true);
    this->ui->cbb_age->setCurrentIndex(0);
    this->ui->cbb_school->setCurrentIndex(0);
    this->ui->le_name->setFocus();
    QList<QAbstractButton *> ins_list = this->ui->insGroup->buttons();
    int i=0;
    for(i = 0;i<ins_list.length();i++){
       QAbstractButton*  box = ins_list.at(i);
        box->setChecked(false);
    }
}

