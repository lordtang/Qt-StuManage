#ifndef QUERYSTU_H
#define QUERYSTU_H

#include <QDialog>


namespace Ui {
class QueryStu;
}

class QueryStu : public QDialog
{
    Q_OBJECT

public:
    explicit QueryStu(QWidget *parent = nullptr);
    ~QueryStu();

private:
    Ui::QueryStu *ui;
};

#endif // QUERYSTU_H
