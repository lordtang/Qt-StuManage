/********************************************************************************
** Form generated from reading UI file 'addstu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addStu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *le_title;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *name;
    QLineEdit *le_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *id;
    QLineEdit *le_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *le_;
    QRadioButton *rbtn_mail;
    QRadioButton *rbtn_fmale;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *cbb_age;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *cbb_school;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_close;

    void setupUi(QDialog *addStu)
    {
        if (addStu->objectName().isEmpty())
            addStu->setObjectName(QStringLiteral("addStu"));
        addStu->resize(350, 480);
        widget = new QWidget(addStu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(17, 8, 311, 461));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        le_title = new QLabel(widget);
        le_title->setObjectName(QStringLiteral("le_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_title->sizePolicy().hasHeightForWidth());
        le_title->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(26);
        le_title->setFont(font);
        le_title->setContextMenuPolicy(Qt::NoContextMenu);
        le_title->setStyleSheet(QStringLiteral(""));
        le_title->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(le_title);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        name = new QLabel(widget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout->addWidget(name);

        le_name = new QLineEdit(widget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEchoMode(QLineEdit::Normal);
        le_name->setClearButtonEnabled(true);

        horizontalLayout->addWidget(le_name);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        id = new QLabel(widget);
        id->setObjectName(QStringLiteral("id"));

        horizontalLayout_2->addWidget(id);

        le_id = new QLineEdit(widget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        le_id->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(le_id);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        le_ = new QLabel(widget);
        le_->setObjectName(QStringLiteral("le_"));

        horizontalLayout_3->addWidget(le_);

        rbtn_mail = new QRadioButton(widget);
        rbtn_mail->setObjectName(QStringLiteral("rbtn_mail"));

        horizontalLayout_3->addWidget(rbtn_mail);

        rbtn_fmale = new QRadioButton(widget);
        rbtn_fmale->setObjectName(QStringLiteral("rbtn_fmale"));

        horizontalLayout_3->addWidget(rbtn_fmale);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cbb_age = new QComboBox(widget);
        cbb_age->setObjectName(QStringLiteral("cbb_age"));

        horizontalLayout_4->addWidget(cbb_age);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 5);
        horizontalLayout_4->setStretch(2, 4);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        cbb_school = new QComboBox(widget);
        cbb_school->setObjectName(QStringLiteral("cbb_school"));

        horizontalLayout_5->addWidget(cbb_school);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);
        horizontalLayout_5->setStretch(2, 4);

        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_6->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_6->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_7->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout_7->addWidget(checkBox_4);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 8);

        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_9->addWidget(btn_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        btn_close = new QPushButton(widget);
        btn_close->setObjectName(QStringLiteral("btn_close"));

        horizontalLayout_9->addWidget(btn_close);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 8);

        retranslateUi(addStu);

        QMetaObject::connectSlotsByName(addStu);
    } // setupUi

    void retranslateUi(QDialog *addStu)
    {
        addStu->setWindowTitle(QApplication::translate("addStu", "\350\257\267\345\241\253\345\206\231\344\277\241\346\201\257", nullptr));
        le_title->setText(QApplication::translate("addStu", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        name->setText(QApplication::translate("addStu", "\345\247\223\345\220\215\357\274\232", nullptr));
        le_name->setPlaceholderText(QApplication::translate("addStu", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        id->setText(QApplication::translate("addStu", "\345\255\246\345\217\267\357\274\232", nullptr));
        le_id->setPlaceholderText(QApplication::translate("addStu", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267", nullptr));
        le_->setText(QApplication::translate("addStu", "\346\200\247\345\210\253\357\274\232", nullptr));
        rbtn_mail->setText(QApplication::translate("addStu", "\347\224\267", nullptr));
        rbtn_fmale->setText(QApplication::translate("addStu", "\345\245\263", nullptr));
        label_5->setText(QApplication::translate("addStu", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_6->setText(QApplication::translate("addStu", "\345\255\246\351\231\242\357\274\232", nullptr));
        label_7->setText(QApplication::translate("addStu", "\345\205\264\350\266\243\357\274\232", nullptr));
        checkBox->setText(QApplication::translate("addStu", "\347\257\256\347\220\203", nullptr));
        checkBox_2->setText(QApplication::translate("addStu", "\346\216\222\347\220\203", nullptr));
        checkBox_3->setText(QApplication::translate("addStu", "\350\266\263\347\220\203", nullptr));
        checkBox_4->setText(QApplication::translate("addStu", "\347\276\275\346\257\233\347\220\203", nullptr));
        btn_ok->setText(QApplication::translate("addStu", "\347\241\256\345\256\232", nullptr));
        btn_close->setText(QApplication::translate("addStu", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addStu: public Ui_addStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
