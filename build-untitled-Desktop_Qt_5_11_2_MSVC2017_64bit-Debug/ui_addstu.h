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
#include <QtWidgets/QButtonGroup>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *le_title;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *name;
    QLineEdit *le_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *id;
    QLineEdit *le_id;
    QHBoxLayout *sexgroup;
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
    QButtonGroup *insGroup;
    QButtonGroup *sexGroup;

    void setupUi(QDialog *addStu)
    {
        if (addStu->objectName().isEmpty())
            addStu->setObjectName(QStringLiteral("addStu"));
        addStu->resize(350, 480);
        layoutWidget = new QWidget(addStu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(17, 8, 311, 461));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        le_title = new QLabel(layoutWidget);
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
        name = new QLabel(layoutWidget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout->addWidget(name);

        le_name = new QLineEdit(layoutWidget);
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
        id = new QLabel(layoutWidget);
        id->setObjectName(QStringLiteral("id"));

        horizontalLayout_2->addWidget(id);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        le_id->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(le_id);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout_2->addLayout(horizontalLayout_2);

        sexgroup = new QHBoxLayout();
        sexgroup->setSpacing(6);
        sexgroup->setObjectName(QStringLiteral("sexgroup"));
        le_ = new QLabel(layoutWidget);
        le_->setObjectName(QStringLiteral("le_"));

        sexgroup->addWidget(le_);

        rbtn_mail = new QRadioButton(layoutWidget);
        sexGroup = new QButtonGroup(addStu);
        sexGroup->setObjectName(QStringLiteral("sexGroup"));
        sexGroup->addButton(rbtn_mail);
        rbtn_mail->setObjectName(QStringLiteral("rbtn_mail"));

        sexgroup->addWidget(rbtn_mail);

        rbtn_fmale = new QRadioButton(layoutWidget);
        sexGroup->addButton(rbtn_fmale);
        rbtn_fmale->setObjectName(QStringLiteral("rbtn_fmale"));

        sexgroup->addWidget(rbtn_fmale);

        sexgroup->setStretch(0, 1);
        sexgroup->setStretch(1, 4);
        sexgroup->setStretch(2, 4);

        verticalLayout_2->addLayout(sexgroup);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cbb_age = new QComboBox(layoutWidget);
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
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
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        cbb_school = new QComboBox(layoutWidget);
        cbb_school->addItem(QString());
        cbb_school->addItem(QString());
        cbb_school->addItem(QString());
        cbb_school->addItem(QString());
        cbb_school->addItem(QString());
        cbb_school->addItem(QString());
        cbb_school->addItem(QString());
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
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkBox = new QCheckBox(layoutWidget);
        insGroup = new QButtonGroup(addStu);
        insGroup->setObjectName(QStringLiteral("insGroup"));
        insGroup->setExclusive(false);
        insGroup->addButton(checkBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_6->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget);
        insGroup->addButton(checkBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_6->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        checkBox_3 = new QCheckBox(layoutWidget);
        insGroup->addButton(checkBox_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_7->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(layoutWidget);
        insGroup->addButton(checkBox_4);
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
        btn_ok = new QPushButton(layoutWidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_9->addWidget(btn_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        btn_close = new QPushButton(layoutWidget);
        btn_close->setObjectName(QStringLiteral("btn_close"));

        horizontalLayout_9->addWidget(btn_close);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 8);

        retranslateUi(addStu);

        cbb_school->setCurrentIndex(0);


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
        cbb_age->setItemText(0, QApplication::translate("addStu", "16", nullptr));
        cbb_age->setItemText(1, QApplication::translate("addStu", "17", nullptr));
        cbb_age->setItemText(2, QApplication::translate("addStu", "18", nullptr));
        cbb_age->setItemText(3, QApplication::translate("addStu", "19", nullptr));
        cbb_age->setItemText(4, QApplication::translate("addStu", "20", nullptr));
        cbb_age->setItemText(5, QApplication::translate("addStu", "21", nullptr));
        cbb_age->setItemText(6, QApplication::translate("addStu", "22", nullptr));
        cbb_age->setItemText(7, QApplication::translate("addStu", "23", nullptr));

        label_6->setText(QApplication::translate("addStu", "\345\255\246\351\231\242\357\274\232", nullptr));
        cbb_school->setItemText(0, QApplication::translate("addStu", "\344\277\241\346\201\257\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        cbb_school->setItemText(1, QApplication::translate("addStu", "\350\215\257\345\255\246\344\270\216\347\224\237\347\211\251\345\267\245\347\250\213", nullptr));
        cbb_school->setItemText(2, QApplication::translate("addStu", "\344\275\223\350\202\262\345\255\246\351\231\242", nullptr));
        cbb_school->setItemText(3, QApplication::translate("addStu", "\351\272\273\347\234\201\347\220\206\345\267\245\345\255\246\351\231\242", nullptr));
        cbb_school->setItemText(4, QApplication::translate("addStu", "\345\214\227\344\272\254\345\255\246\351\231\242", nullptr));
        cbb_school->setItemText(5, QApplication::translate("addStu", "\346\270\205\345\215\216\345\255\246\351\231\242", nullptr));
        cbb_school->setItemText(6, QApplication::translate("addStu", "\351\207\216\351\270\241\345\255\246\351\231\242", nullptr));

        label_7->setText(QApplication::translate("addStu", "\345\205\264\350\266\243\357\274\232", nullptr));
        checkBox->setText(QApplication::translate("addStu", "\347\257\256\347\220\203", nullptr));
        checkBox_2->setText(QApplication::translate("addStu", "\346\216\222\347\220\203", nullptr));
        checkBox_3->setText(QApplication::translate("addStu", "\350\266\263\347\220\203", nullptr));
        checkBox_4->setText(QApplication::translate("addStu", "\347\276\275\346\257\233\347\220\203", nullptr));
        btn_ok->setText(QApplication::translate("addStu", "\347\241\256\345\256\232", nullptr));
        btn_close->setText(QApplication::translate("addStu", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addStu: public Ui_addStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
