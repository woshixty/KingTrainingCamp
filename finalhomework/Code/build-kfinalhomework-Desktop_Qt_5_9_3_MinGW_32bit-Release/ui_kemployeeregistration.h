/********************************************************************************
** Form generated from reading UI file 'kemployeeregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEMPLOYEEREGISTRATION_H
#define UI_KEMPLOYEEREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KEmployeeRegistration
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *m_username_edit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *m_password_edit;
    QLineEdit *m_password_again_edit;
    QLineEdit *m_name_edit;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QRadioButton *m_man_btn;
    QRadioButton *m_woman_btn;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QDateEdit *m_birthday_edit;
    QLineEdit *m_phone_edit;
    QLineEdit *m_address_edit;
    QLineEdit *m_email_edit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_register;
    QPushButton *m_clear;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *KEmployeeRegistration)
    {
        if (KEmployeeRegistration->objectName().isEmpty())
            KEmployeeRegistration->setObjectName(QStringLiteral("KEmployeeRegistration"));
        KEmployeeRegistration->resize(495, 378);
        gridLayout = new QGridLayout(KEmployeeRegistration);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(KEmployeeRegistration);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        m_username_edit = new QLineEdit(KEmployeeRegistration);
        m_username_edit->setObjectName(QStringLiteral("m_username_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_username_edit);

        label_2 = new QLabel(KEmployeeRegistration);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(KEmployeeRegistration);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(KEmployeeRegistration);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        m_password_edit = new QLineEdit(KEmployeeRegistration);
        m_password_edit->setObjectName(QStringLiteral("m_password_edit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_password_edit);

        m_password_again_edit = new QLineEdit(KEmployeeRegistration);
        m_password_again_edit->setObjectName(QStringLiteral("m_password_again_edit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_password_again_edit);

        m_name_edit = new QLineEdit(KEmployeeRegistration);
        m_name_edit->setObjectName(QStringLiteral("m_name_edit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, m_name_edit);

        label_5 = new QLabel(KEmployeeRegistration);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_man_btn = new QRadioButton(KEmployeeRegistration);
        m_man_btn->setObjectName(QStringLiteral("m_man_btn"));

        horizontalLayout->addWidget(m_man_btn);

        m_woman_btn = new QRadioButton(KEmployeeRegistration);
        m_woman_btn->setObjectName(QStringLiteral("m_woman_btn"));

        horizontalLayout->addWidget(m_woman_btn);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        label_6 = new QLabel(KEmployeeRegistration);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(KEmployeeRegistration);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(KEmployeeRegistration);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(KEmployeeRegistration);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        m_birthday_edit = new QDateEdit(KEmployeeRegistration);
        m_birthday_edit->setObjectName(QStringLiteral("m_birthday_edit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, m_birthday_edit);

        m_phone_edit = new QLineEdit(KEmployeeRegistration);
        m_phone_edit->setObjectName(QStringLiteral("m_phone_edit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, m_phone_edit);

        m_address_edit = new QLineEdit(KEmployeeRegistration);
        m_address_edit->setObjectName(QStringLiteral("m_address_edit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, m_address_edit);

        m_email_edit = new QLineEdit(KEmployeeRegistration);
        m_email_edit->setObjectName(QStringLiteral("m_email_edit"));

        formLayout->setWidget(8, QFormLayout::FieldRole, m_email_edit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_register = new QPushButton(KEmployeeRegistration);
        m_register->setObjectName(QStringLiteral("m_register"));

        horizontalLayout_2->addWidget(m_register);

        m_clear = new QPushButton(KEmployeeRegistration);
        m_clear->setObjectName(QStringLiteral("m_clear"));

        horizontalLayout_2->addWidget(m_clear);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(KEmployeeRegistration);

        QMetaObject::connectSlotsByName(KEmployeeRegistration);
    } // setupUi

    void retranslateUi(QWidget *KEmployeeRegistration)
    {
        KEmployeeRegistration->setWindowTitle(QApplication::translate("KEmployeeRegistration", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("KEmployeeRegistration", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        m_username_edit->setText(QApplication::translate("KEmployeeRegistration", "123", Q_NULLPTR));
        label_2->setText(QApplication::translate("KEmployeeRegistration", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("KEmployeeRegistration", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("KEmployeeRegistration", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        m_password_edit->setText(QApplication::translate("KEmployeeRegistration", "123", Q_NULLPTR));
        m_password_again_edit->setText(QApplication::translate("KEmployeeRegistration", "123", Q_NULLPTR));
        m_name_edit->setText(QApplication::translate("KEmployeeRegistration", "\346\234\261\347\236\273\345\237\272", Q_NULLPTR));
        label_5->setText(QApplication::translate("KEmployeeRegistration", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        m_man_btn->setText(QApplication::translate("KEmployeeRegistration", "\347\224\267", Q_NULLPTR));
        m_woman_btn->setText(QApplication::translate("KEmployeeRegistration", "\345\245\263", Q_NULLPTR));
        label_6->setText(QApplication::translate("KEmployeeRegistration", "\347\224\237\346\227\245\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("KEmployeeRegistration", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("KEmployeeRegistration", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("KEmployeeRegistration", "\351\202\256\347\256\261\357\274\232", Q_NULLPTR));
        m_phone_edit->setText(QApplication::translate("KEmployeeRegistration", "12376547890", Q_NULLPTR));
        m_address_edit->setText(QApplication::translate("KEmployeeRegistration", "\345\214\227\344\272\254", Q_NULLPTR));
        m_email_edit->setText(QApplication::translate("KEmployeeRegistration", "er@zhu.com", Q_NULLPTR));
        m_register->setText(QApplication::translate("KEmployeeRegistration", "\346\263\250\345\206\214", Q_NULLPTR));
        m_clear->setText(QApplication::translate("KEmployeeRegistration", "\351\207\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KEmployeeRegistration: public Ui_KEmployeeRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEMPLOYEEREGISTRATION_H
