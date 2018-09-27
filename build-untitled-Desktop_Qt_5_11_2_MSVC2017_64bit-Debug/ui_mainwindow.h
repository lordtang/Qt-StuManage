/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionaddStu;
    QAction *actionqueryStu;
    QAction *actionabout;
    QAction *actionhelp;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 450);
        actionaddStu = new QAction(MainWindow);
        actionaddStu->setObjectName(QStringLiteral("actionaddStu"));
        actionqueryStu = new QAction(MainWindow);
        actionqueryStu->setObjectName(QStringLiteral("actionqueryStu"));
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QStringLiteral("actionabout"));
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName(QStringLiteral("actionhelp"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionaddStu);
        menu->addAction(actionqueryStu);
        menu_2->addAction(actionabout);
        menu_2->addAction(actionhelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionaddStu->setText(QApplication::translate("MainWindow", "addStu", nullptr));
        actionqueryStu->setText(QApplication::translate("MainWindow", "queryStu", nullptr));
        actionabout->setText(QApplication::translate("MainWindow", "about", nullptr));
        actionhelp->setText(QApplication::translate("MainWindow", "help", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
