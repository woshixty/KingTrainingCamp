/********************************************************************************
** Form generated from reading UI file 'kroomcheckout.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KROOMCHECKOUT_H
#define UI_KROOMCHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KRoomCheckOut
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTextEdit *m_text_info;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *m_room_box;
    QLabel *label_2;
    QDateTimeEdit *m_check_out_time;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_room_btn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *KRoomCheckOut)
    {
        if (KRoomCheckOut->objectName().isEmpty())
            KRoomCheckOut->setObjectName(QStringLiteral("KRoomCheckOut"));
        KRoomCheckOut->resize(573, 300);
        gridLayout_2 = new QGridLayout(KRoomCheckOut);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_text_info = new QTextEdit(KRoomCheckOut);
        m_text_info->setObjectName(QStringLiteral("m_text_info"));
        m_text_info->setEnabled(false);

        gridLayout->addWidget(m_text_info, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(KRoomCheckOut);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        m_room_box = new QComboBox(KRoomCheckOut);
        m_room_box->setObjectName(QStringLiteral("m_room_box"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_room_box);

        label_2 = new QLabel(KRoomCheckOut);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        m_check_out_time = new QDateTimeEdit(KRoomCheckOut);
        m_check_out_time->setObjectName(QStringLiteral("m_check_out_time"));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_check_out_time);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_room_btn = new QPushButton(KRoomCheckOut);
        m_room_btn->setObjectName(QStringLiteral("m_room_btn"));

        horizontalLayout->addWidget(m_room_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(KRoomCheckOut);

        QMetaObject::connectSlotsByName(KRoomCheckOut);
    } // setupUi

    void retranslateUi(QWidget *KRoomCheckOut)
    {
        KRoomCheckOut->setWindowTitle(QApplication::translate("KRoomCheckOut", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("KRoomCheckOut", "\346\210\277\351\227\264\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("KRoomCheckOut", "\351\200\200\346\210\277\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        m_room_btn->setText(QApplication::translate("KRoomCheckOut", "\347\241\256\350\256\244\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KRoomCheckOut: public Ui_KRoomCheckOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KROOMCHECKOUT_H
