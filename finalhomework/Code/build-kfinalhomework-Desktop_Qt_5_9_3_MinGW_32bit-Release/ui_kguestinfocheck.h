/********************************************************************************
** Form generated from reading UI file 'kguestinfocheck.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KGUESTINFOCHECK_H
#define UI_KGUESTINFOCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KGuestInfoCheck
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *m_room_list;
    QPushButton *m_search_roomid;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_name_edit;
    QPushButton *m_search_name;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *m_idnumber_edit;
    QPushButton *m_search_btn;
    QTableView *m_table_view;

    void setupUi(QWidget *KGuestInfoCheck)
    {
        if (KGuestInfoCheck->objectName().isEmpty())
            KGuestInfoCheck->setObjectName(QStringLiteral("KGuestInfoCheck"));
        KGuestInfoCheck->resize(714, 438);
        gridLayout_4 = new QGridLayout(KGuestInfoCheck);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(KGuestInfoCheck);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_room_list = new QComboBox(groupBox);
        m_room_list->setObjectName(QStringLiteral("m_room_list"));

        horizontalLayout->addWidget(m_room_list);

        m_search_roomid = new QPushButton(groupBox);
        m_search_roomid->setObjectName(QStringLiteral("m_search_roomid"));

        horizontalLayout->addWidget(m_search_roomid);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(KGuestInfoCheck);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_name_edit = new QLineEdit(groupBox_2);
        m_name_edit->setObjectName(QStringLiteral("m_name_edit"));

        horizontalLayout_2->addWidget(m_name_edit);

        m_search_name = new QPushButton(groupBox_2);
        m_search_name->setObjectName(QStringLiteral("m_search_name"));

        horizontalLayout_2->addWidget(m_search_name);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout_4);

        groupBox_3 = new QGroupBox(KGuestInfoCheck);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_idnumber_edit = new QLineEdit(groupBox_3);
        m_idnumber_edit->setObjectName(QStringLiteral("m_idnumber_edit"));

        horizontalLayout_3->addWidget(m_idnumber_edit);

        m_search_btn = new QPushButton(groupBox_3);
        m_search_btn->setObjectName(QStringLiteral("m_search_btn"));

        horizontalLayout_3->addWidget(m_search_btn);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);


        verticalLayout_2->addLayout(verticalLayout);

        m_table_view = new QTableView(KGuestInfoCheck);
        m_table_view->setObjectName(QStringLiteral("m_table_view"));

        verticalLayout_2->addWidget(m_table_view);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(KGuestInfoCheck);

        QMetaObject::connectSlotsByName(KGuestInfoCheck);
    } // setupUi

    void retranslateUi(QWidget *KGuestInfoCheck)
    {
        KGuestInfoCheck->setWindowTitle(QApplication::translate("KGuestInfoCheck", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("KGuestInfoCheck", "\346\214\211\346\210\277\351\227\264\345\217\267\346\237\245", Q_NULLPTR));
        m_search_roomid->setText(QApplication::translate("KGuestInfoCheck", "\346\237\245\350\257\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("KGuestInfoCheck", "\346\214\211\345\247\223\345\220\215\346\237\245", Q_NULLPTR));
        m_search_name->setText(QApplication::translate("KGuestInfoCheck", "\346\237\245\350\257\242", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("KGuestInfoCheck", "\346\214\211\350\272\253\344\273\275\350\257\201\346\237\245", Q_NULLPTR));
        m_search_btn->setText(QApplication::translate("KGuestInfoCheck", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KGuestInfoCheck: public Ui_KGuestInfoCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KGUESTINFOCHECK_H
