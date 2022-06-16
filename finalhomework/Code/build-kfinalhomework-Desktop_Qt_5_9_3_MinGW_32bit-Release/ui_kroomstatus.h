/********************************************************************************
** Form generated from reading UI file 'kroomstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KROOMSTATUS_H
#define UI_KROOMSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KRoomStatus
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QGridLayout *m_status_table;
    QPushButton *m_303;
    QPushButton *m_201;
    QPushButton *m_301;
    QPushButton *m_403;
    QPushButton *m_103;
    QPushButton *m_302;
    QPushButton *m_202;
    QPushButton *m_104;
    QPushButton *m_304;
    QPushButton *m_404;
    QPushButton *m_102;
    QPushButton *m_204;
    QPushButton *m_401;
    QPushButton *m_402;
    QPushButton *m_203;
    QPushButton *m_501;
    QPushButton *m_502;
    QPushButton *m_503;
    QPushButton *m_504;
    QPushButton *m_101;

    void setupUi(QWidget *KRoomStatus)
    {
        if (KRoomStatus->objectName().isEmpty())
            KRoomStatus->setObjectName(QStringLiteral("KRoomStatus"));
        KRoomStatus->resize(659, 466);
        gridLayout_2 = new QGridLayout(KRoomStatus);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(KRoomStatus);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(KRoomStatus);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(KRoomStatus);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(50, 16777215));
        label_4->setStyleSheet(QStringLiteral("background-color: white;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

        label_3 = new QLabel(KRoomStatus);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(KRoomStatus);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(40, 0));
        label_5->setMaximumSize(QSize(50, 16777215));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(220, 220, 220);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_5);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        m_status_table = new QGridLayout();
        m_status_table->setObjectName(QStringLiteral("m_status_table"));
        m_303 = new QPushButton(KRoomStatus);
        m_303->setObjectName(QStringLiteral("m_303"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_303->sizePolicy().hasHeightForWidth());
        m_303->setSizePolicy(sizePolicy1);
        m_303->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_303, 2, 2, 1, 1);

        m_201 = new QPushButton(KRoomStatus);
        m_201->setObjectName(QStringLiteral("m_201"));
        sizePolicy1.setHeightForWidth(m_201->sizePolicy().hasHeightForWidth());
        m_201->setSizePolicy(sizePolicy1);
        m_201->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_201, 1, 0, 1, 1);

        m_301 = new QPushButton(KRoomStatus);
        m_301->setObjectName(QStringLiteral("m_301"));
        sizePolicy1.setHeightForWidth(m_301->sizePolicy().hasHeightForWidth());
        m_301->setSizePolicy(sizePolicy1);
        m_301->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_301, 2, 0, 1, 1);

        m_403 = new QPushButton(KRoomStatus);
        m_403->setObjectName(QStringLiteral("m_403"));
        sizePolicy1.setHeightForWidth(m_403->sizePolicy().hasHeightForWidth());
        m_403->setSizePolicy(sizePolicy1);
        m_403->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_403, 3, 2, 1, 1);

        m_103 = new QPushButton(KRoomStatus);
        m_103->setObjectName(QStringLiteral("m_103"));
        sizePolicy1.setHeightForWidth(m_103->sizePolicy().hasHeightForWidth());
        m_103->setSizePolicy(sizePolicy1);
        m_103->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_103, 0, 2, 1, 1);

        m_302 = new QPushButton(KRoomStatus);
        m_302->setObjectName(QStringLiteral("m_302"));
        sizePolicy1.setHeightForWidth(m_302->sizePolicy().hasHeightForWidth());
        m_302->setSizePolicy(sizePolicy1);
        m_302->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_302, 2, 1, 1, 1);

        m_202 = new QPushButton(KRoomStatus);
        m_202->setObjectName(QStringLiteral("m_202"));
        sizePolicy1.setHeightForWidth(m_202->sizePolicy().hasHeightForWidth());
        m_202->setSizePolicy(sizePolicy1);
        m_202->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_202, 1, 1, 1, 1);

        m_104 = new QPushButton(KRoomStatus);
        m_104->setObjectName(QStringLiteral("m_104"));
        sizePolicy1.setHeightForWidth(m_104->sizePolicy().hasHeightForWidth());
        m_104->setSizePolicy(sizePolicy1);
        m_104->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_104, 0, 3, 1, 1);

        m_304 = new QPushButton(KRoomStatus);
        m_304->setObjectName(QStringLiteral("m_304"));
        sizePolicy1.setHeightForWidth(m_304->sizePolicy().hasHeightForWidth());
        m_304->setSizePolicy(sizePolicy1);
        m_304->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_304, 2, 3, 1, 1);

        m_404 = new QPushButton(KRoomStatus);
        m_404->setObjectName(QStringLiteral("m_404"));
        sizePolicy1.setHeightForWidth(m_404->sizePolicy().hasHeightForWidth());
        m_404->setSizePolicy(sizePolicy1);
        m_404->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_404, 3, 3, 1, 1);

        m_102 = new QPushButton(KRoomStatus);
        m_102->setObjectName(QStringLiteral("m_102"));
        sizePolicy1.setHeightForWidth(m_102->sizePolicy().hasHeightForWidth());
        m_102->setSizePolicy(sizePolicy1);
        m_102->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_102, 0, 1, 1, 1);

        m_204 = new QPushButton(KRoomStatus);
        m_204->setObjectName(QStringLiteral("m_204"));
        sizePolicy1.setHeightForWidth(m_204->sizePolicy().hasHeightForWidth());
        m_204->setSizePolicy(sizePolicy1);
        m_204->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_204, 1, 3, 1, 1);

        m_401 = new QPushButton(KRoomStatus);
        m_401->setObjectName(QStringLiteral("m_401"));
        sizePolicy1.setHeightForWidth(m_401->sizePolicy().hasHeightForWidth());
        m_401->setSizePolicy(sizePolicy1);
        m_401->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_401, 3, 0, 1, 1);

        m_402 = new QPushButton(KRoomStatus);
        m_402->setObjectName(QStringLiteral("m_402"));
        sizePolicy1.setHeightForWidth(m_402->sizePolicy().hasHeightForWidth());
        m_402->setSizePolicy(sizePolicy1);
        m_402->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_402, 3, 1, 1, 1);

        m_203 = new QPushButton(KRoomStatus);
        m_203->setObjectName(QStringLiteral("m_203"));
        sizePolicy1.setHeightForWidth(m_203->sizePolicy().hasHeightForWidth());
        m_203->setSizePolicy(sizePolicy1);
        m_203->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_203, 1, 2, 1, 1);

        m_501 = new QPushButton(KRoomStatus);
        m_501->setObjectName(QStringLiteral("m_501"));
        sizePolicy1.setHeightForWidth(m_501->sizePolicy().hasHeightForWidth());
        m_501->setSizePolicy(sizePolicy1);
        m_501->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_501, 4, 0, 1, 1);

        m_502 = new QPushButton(KRoomStatus);
        m_502->setObjectName(QStringLiteral("m_502"));
        sizePolicy1.setHeightForWidth(m_502->sizePolicy().hasHeightForWidth());
        m_502->setSizePolicy(sizePolicy1);
        m_502->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_502, 4, 1, 1, 1);

        m_503 = new QPushButton(KRoomStatus);
        m_503->setObjectName(QStringLiteral("m_503"));
        sizePolicy1.setHeightForWidth(m_503->sizePolicy().hasHeightForWidth());
        m_503->setSizePolicy(sizePolicy1);
        m_503->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_503, 4, 2, 1, 1);

        m_504 = new QPushButton(KRoomStatus);
        m_504->setObjectName(QStringLiteral("m_504"));
        sizePolicy1.setHeightForWidth(m_504->sizePolicy().hasHeightForWidth());
        m_504->setSizePolicy(sizePolicy1);
        m_504->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_504, 4, 3, 1, 1);

        m_101 = new QPushButton(KRoomStatus);
        m_101->setObjectName(QStringLiteral("m_101"));
        sizePolicy1.setHeightForWidth(m_101->sizePolicy().hasHeightForWidth());
        m_101->setSizePolicy(sizePolicy1);
        m_101->setStyleSheet(QLatin1String("background-color: rgb(82, 255, 89);\n"
"border-radius: 20px;"));

        m_status_table->addWidget(m_101, 0, 0, 1, 1);


        verticalLayout->addLayout(m_status_table);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 55);

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(KRoomStatus);

        QMetaObject::connectSlotsByName(KRoomStatus);
    } // setupUi

    void retranslateUi(QWidget *KRoomStatus)
    {
        KRoomStatus->setWindowTitle(QApplication::translate("KRoomStatus", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("KRoomStatus", "\346\210\277\351\227\264\347\212\266\346\200\201\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("KRoomStatus", "\347\251\272\351\227\262\357\274\232", Q_NULLPTR));
        label_4->setText(QString());
        label_3->setText(QApplication::translate("KRoomStatus", "\345\267\262\345\205\245\344\275\217\357\274\232", Q_NULLPTR));
        label_5->setText(QString());
        m_303->setText(QApplication::translate("KRoomStatus", "303\n"
"\347\251\272\346\210\277\n"
"\345\225\206\345\212\241\345\245\227\351\227\264", Q_NULLPTR));
        m_201->setText(QApplication::translate("KRoomStatus", "201\n"
"\347\251\272\346\210\277\n"
"\345\215\225\344\272\272\351\227\264", Q_NULLPTR));
        m_301->setText(QApplication::translate("KRoomStatus", "301\n"
"\347\251\272\346\210\277\n"
"\345\244\247\345\272\212\346\210\277", Q_NULLPTR));
        m_403->setText(QApplication::translate("KRoomStatus", "403\n"
"\347\251\272\346\210\277\n"
"\345\225\206\345\212\241\345\245\227\351\227\264", Q_NULLPTR));
        m_103->setText(QApplication::translate("KRoomStatus", "103\n"
"\347\251\272\346\210\277\n"
"\346\240\207\351\227\264", Q_NULLPTR));
        m_302->setText(QApplication::translate("KRoomStatus", "302\n"
"\347\251\272\346\210\277\n"
"\345\244\247\345\272\212\346\210\277", Q_NULLPTR));
        m_202->setText(QApplication::translate("KRoomStatus", "202\n"
"\347\251\272\346\210\277\n"
"\345\215\225\344\272\272\351\227\264", Q_NULLPTR));
        m_104->setText(QApplication::translate("KRoomStatus", "104\n"
"\347\251\272\346\210\277\n"
"\346\240\207\351\227\264", Q_NULLPTR));
        m_304->setText(QApplication::translate("KRoomStatus", "304\n"
"\347\251\272\346\210\277\n"
"\350\261\252\345\215\216\345\245\227\351\227\264", Q_NULLPTR));
        m_404->setText(QApplication::translate("KRoomStatus", "404\n"
"\347\251\272\346\210\277\n"
"\350\261\252\345\215\216\345\245\227\351\227\264", Q_NULLPTR));
        m_102->setText(QApplication::translate("KRoomStatus", "102\n"
"\347\251\272\346\210\277\n"
"\346\240\207\351\227\264", Q_NULLPTR));
        m_204->setText(QApplication::translate("KRoomStatus", "204\n"
"\347\251\272\346\210\277\n"
"\345\215\225\344\272\272\351\227\264", Q_NULLPTR));
        m_401->setText(QApplication::translate("KRoomStatus", "401\n"
"\347\251\272\346\210\277\n"
"\345\244\247\345\272\212\346\210\277", Q_NULLPTR));
        m_402->setText(QApplication::translate("KRoomStatus", "402\n"
"\347\251\272\346\210\277\n"
"\345\244\247\345\272\212\346\210\277", Q_NULLPTR));
        m_203->setText(QApplication::translate("KRoomStatus", "203\n"
"\347\251\272\346\210\277\n"
"\345\215\225\344\272\272\351\227\264", Q_NULLPTR));
        m_501->setText(QApplication::translate("KRoomStatus", "501\n"
"\347\251\272\346\210\277\n"
"\345\244\247\345\272\212\346\210\277", Q_NULLPTR));
        m_502->setText(QApplication::translate("KRoomStatus", "502\n"
"\347\251\272\346\210\277\n"
"\345\244\247\345\272\212\346\210\277", Q_NULLPTR));
        m_503->setText(QApplication::translate("KRoomStatus", "503\n"
"\347\251\272\346\210\277\n"
"\345\225\206\345\212\241\345\245\227\351\227\264", Q_NULLPTR));
        m_504->setText(QApplication::translate("KRoomStatus", "504\n"
"\347\251\272\346\210\277\n"
"\350\261\252\345\215\216\345\245\227\351\227\264", Q_NULLPTR));
        m_101->setText(QApplication::translate("KRoomStatus", "101\n"
"\347\251\272\346\210\277\n"
"\346\240\207\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KRoomStatus: public Ui_KRoomStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KROOMSTATUS_H
