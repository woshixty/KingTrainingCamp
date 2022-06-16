/********************************************************************************
** Form generated from reading UI file 'kroomcheckin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KROOMCHECKIN_H
#define UI_KROOMCHECKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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

class Ui_KRoomCheckIn
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *m_check_in_time;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *m_name_edit;
    QLabel *label_4;
    QLineEdit *m_id_edit;
    QLabel *label_5;
    QLineEdit *m_phone_edit;
    QLabel *label_6;
    QComboBox *m_room_box;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *m_normal_button;
    QRadioButton *m_vip_button;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *m_checkin_btn;
    QPushButton *m_clear_btn;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *KRoomCheckIn)
    {
        if (KRoomCheckIn->objectName().isEmpty())
            KRoomCheckIn->setObjectName(QStringLiteral("KRoomCheckIn"));
        KRoomCheckIn->resize(608, 407);
        gridLayout = new QGridLayout(KRoomCheckIn);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(KRoomCheckIn);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_check_in_time = new QDateTimeEdit(KRoomCheckIn);
        m_check_in_time->setObjectName(QStringLiteral("m_check_in_time"));

        horizontalLayout->addWidget(m_check_in_time);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(KRoomCheckIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        m_name_edit = new QLineEdit(groupBox);
        m_name_edit->setObjectName(QStringLiteral("m_name_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_name_edit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        m_id_edit = new QLineEdit(groupBox);
        m_id_edit->setObjectName(QStringLiteral("m_id_edit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_id_edit);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        m_phone_edit = new QLineEdit(groupBox);
        m_phone_edit->setObjectName(QStringLiteral("m_phone_edit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_phone_edit);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        m_room_box = new QComboBox(groupBox);
        m_room_box->setObjectName(QStringLiteral("m_room_box"));

        formLayout->setWidget(3, QFormLayout::FieldRole, m_room_box);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_normal_button = new QRadioButton(groupBox);
        m_normal_button->setObjectName(QStringLiteral("m_normal_button"));
        m_normal_button->setChecked(true);

        horizontalLayout_3->addWidget(m_normal_button);

        m_vip_button = new QRadioButton(groupBox);
        m_vip_button->setObjectName(QStringLiteral("m_vip_button"));

        horizontalLayout_3->addWidget(m_vip_button);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_3);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        m_checkin_btn = new QPushButton(KRoomCheckIn);
        m_checkin_btn->setObjectName(QStringLiteral("m_checkin_btn"));

        horizontalLayout_4->addWidget(m_checkin_btn);

        m_clear_btn = new QPushButton(KRoomCheckIn);
        m_clear_btn->setObjectName(QStringLiteral("m_clear_btn"));

        horizontalLayout_4->addWidget(m_clear_btn);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(KRoomCheckIn);

        QMetaObject::connectSlotsByName(KRoomCheckIn);
    } // setupUi

    void retranslateUi(QWidget *KRoomCheckIn)
    {
        KRoomCheckIn->setWindowTitle(QApplication::translate("KRoomCheckIn", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("KRoomCheckIn", "\351\200\211\346\213\251\345\205\245\344\275\217\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("KRoomCheckIn", "\347\224\250\346\210\267\344\277\241\346\201\257\347\231\273\350\256\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("KRoomCheckIn", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        m_name_edit->setText(QApplication::translate("KRoomCheckIn", "\346\234\261\345\260\221\345\243\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("KRoomCheckIn", "\350\272\253\344\273\275\350\257\201\357\274\232", Q_NULLPTR));
        m_id_edit->setText(QApplication::translate("KRoomCheckIn", "140525197408263611", Q_NULLPTR));
        label_5->setText(QApplication::translate("KRoomCheckIn", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        m_phone_edit->setText(QApplication::translate("KRoomCheckIn", "17420897764", Q_NULLPTR));
        label_6->setText(QApplication::translate("KRoomCheckIn", "\346\210\277\351\227\264\357\274\232", Q_NULLPTR));
        m_normal_button->setText(QApplication::translate("KRoomCheckIn", "\346\231\256\351\200\232", Q_NULLPTR));
        m_vip_button->setText(QApplication::translate("KRoomCheckIn", "\344\274\232\345\221\230", Q_NULLPTR));
        label_7->setText(QApplication::translate("KRoomCheckIn", "\350\272\253\344\273\275\357\274\232", Q_NULLPTR));
        m_checkin_btn->setText(QApplication::translate("KRoomCheckIn", "\347\231\273\350\256\260", Q_NULLPTR));
        m_clear_btn->setText(QApplication::translate("KRoomCheckIn", "\351\207\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KRoomCheckIn: public Ui_KRoomCheckIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KROOMCHECKIN_H
