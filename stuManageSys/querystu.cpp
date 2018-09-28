#include "querystu.h"
#include "ui_querystu.h"
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>


QueryStu::QueryStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QueryStu)
{
    ui->setupUi(this);
    if(readFromFile()==-1){
        QMessageBox::critical(this,"严重错误","文件打开失败");
        this->close();
    };
    this->model = new QStandardItemModel;
    //设置表头
    tableHeadinit();
}

QueryStu::~QueryStu()
{
    delete ui;
}

int QueryStu::readFromFile()         //读取文件放进缓存区准备查询使用
{
    QFile file("stu.txt");
    if(! file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return  -1;
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        stu_lines.append(line);
    }
    file.close();
    int i = 0;
    for(i = 0;i<stu_lines.length();i++){
        qDebug()<<stu_lines.at(i);
    }

    return 0;
}

void QueryStu::on_btn_search_clicked()
{
    this->model->clear();  //清空
    tableHeadinit();
    int index = this->ui->cbb_method->currentIndex();
    QString cnt = this->ui->le_cnt->text();
    doQuery(index,cnt);
}

void QueryStu::doQuery(int index,QString cnt)
{
    int row = 0;
    int i = 0;
    for(i=0;i<stu_lines.length();i++)
    {
        QString line = stu_lines.at(i);
        line = line.trimmed();  //去掉开头结尾空白
        QStringList subs = line.split(" ");
        switch (index) {
        case 1:
            if(cnt ==subs.at(0)){
                disPlay(row++,subs);
            }
            break;
        case 2:
            if(cnt ==subs.at(1)){
                disPlay(row++,subs);
            }
            break;
        case 3:
             if(cnt ==subs.at(4)){
                 disPlay(row++,subs);
             }
            break;

        }
    }
}
void QueryStu::disPlay(int row, QStringList subs)
{
    int i = 0;
    for(i = 0;i<5;i++)
    {
        this->model->setItem(row,i,new QStandardItem(subs.at(i)));
    }
    QString ins;
    for(i = 5;i<subs.length();i++)
    {
        ins +=subs.at(i)+",";
    }
    this->model->setItem(row,5,new QStandardItem(ins));
}
void QueryStu::tableHeadinit(){
    //设置表头
    this->model->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("学号"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("性别"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("年龄"));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("学院"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("爱好"));

    this->ui->tableView->setModel(model);
    //设置宽度
    this->ui->tableView->setColumnWidth(0,100);
    this->ui->tableView->setColumnWidth(1,150);
    this->ui->tableView->setColumnWidth(2,50);
    this->ui->tableView->setColumnWidth(3,50);
    this->ui->tableView->setColumnWidth(4,100);
    this->ui->tableView->setColumnWidth(5,150);
}
