/********************************************************************************
** Form generated from reading UI file 'ktodayroom.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KTODAYROOM_H
#define UI_KTODAYROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KTodayRoom
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTableView *m_table_room_info;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *KTodayRoom)
    {
        if (KTodayRoom->objectName().isEmpty())
            KTodayRoom->setObjectName(QStringLiteral("KTodayRoom"));
        KTodayRoom->resize(800, 340);
        gridLayout_2 = new QGridLayout(KTodayRoom);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_table_room_info = new QTableView(KTodayRoom);
        m_table_room_info->setObjectName(QStringLiteral("m_table_room_info"));

        horizontalLayout->addWidget(m_table_room_info);

        label = new QLabel(KTodayRoom);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(KTodayRoom);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(KTodayRoom);

        QMetaObject::connectSlotsByName(KTodayRoom);
    } // setupUi

    void retranslateUi(QWidget *KTodayRoom)
    {
        KTodayRoom->setWindowTitle(QApplication::translate("KTodayRoom", "Form", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("KTodayRoom", "\344\277\256\346\224\271\345\233\276\347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KTodayRoom: public Ui_KTodayRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KTODAYROOM_H
