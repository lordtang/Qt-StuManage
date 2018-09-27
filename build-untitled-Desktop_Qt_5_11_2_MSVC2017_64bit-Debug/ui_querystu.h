/********************************************************************************
** Form generated from reading UI file 'querystu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSTU_H
#define UI_QUERYSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryStu
{
public:
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbb_method;
    QLineEdit *le_cnt;
    QPushButton *btn_search;

    void setupUi(QDialog *QueryStu)
    {
        if (QueryStu->objectName().isEmpty())
            QueryStu->setObjectName(QStringLiteral("QueryStu"));
        QueryStu->resize(650, 450);
        tableView = new QTableView(QueryStu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 70, 571, 301));
        widget = new QWidget(QueryStu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 30, 581, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cbb_method = new QComboBox(widget);
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->setObjectName(QStringLiteral("cbb_method"));

        horizontalLayout->addWidget(cbb_method);

        le_cnt = new QLineEdit(widget);
        le_cnt->setObjectName(QStringLiteral("le_cnt"));

        horizontalLayout->addWidget(le_cnt);

        btn_search = new QPushButton(widget);
        btn_search->setObjectName(QStringLiteral("btn_search"));

        horizontalLayout->addWidget(btn_search);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 6);
        horizontalLayout->setStretch(2, 2);

        retranslateUi(QueryStu);

        QMetaObject::connectSlotsByName(QueryStu);
    } // setupUi

    void retranslateUi(QDialog *QueryStu)
    {
        QueryStu->setWindowTitle(QApplication::translate("QueryStu", "Dialog", nullptr));
        cbb_method->setItemText(0, QApplication::translate("QueryStu", "\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", nullptr));
        cbb_method->setItemText(1, QApplication::translate("QueryStu", "\346\214\211\345\247\223\345\220\215", nullptr));
        cbb_method->setItemText(2, QApplication::translate("QueryStu", "\346\214\211\345\255\246\345\217\267", nullptr));
        cbb_method->setItemText(3, QApplication::translate("QueryStu", "\346\214\211\345\255\246\351\231\242", nullptr));

        btn_search->setText(QApplication::translate("QueryStu", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryStu: public Ui_QueryStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSTU_H
