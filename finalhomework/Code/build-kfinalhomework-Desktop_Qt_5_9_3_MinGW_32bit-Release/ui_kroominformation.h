/********************************************************************************
** Form generated from reading UI file 'kroominformation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KROOMINFORMATION_H
#define UI_KROOMINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <view/innerpage/kguestinfocheck.h>
#include <view/innerpage/kroomcheckin.h>
#include <view/innerpage/kroomcheckout.h>

QT_BEGIN_NAMESPACE

class Ui_KInformationRegistration
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    KRoomCheckIn *m_check_in;
    KRoomCheckOut *m_check_out;
    KGuestInfoCheck *m_check_search;

    void setupUi(QWidget *KInformationRegistration)
    {
        if (KInformationRegistration->objectName().isEmpty())
            KInformationRegistration->setObjectName(QStringLiteral("KInformationRegistration"));
        KInformationRegistration->resize(636, 470);
        gridLayout = new QGridLayout(KInformationRegistration);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(KInformationRegistration);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        m_check_in = new KRoomCheckIn();
        m_check_in->setObjectName(QStringLiteral("m_check_in"));
        tabWidget->addTab(m_check_in, QString());
        m_check_out = new KRoomCheckOut();
        m_check_out->setObjectName(QStringLiteral("m_check_out"));
        tabWidget->addTab(m_check_out, QString());
        m_check_search = new KGuestInfoCheck();
        m_check_search->setObjectName(QStringLiteral("m_check_search"));
        tabWidget->addTab(m_check_search, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(KInformationRegistration);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(KInformationRegistration);
    } // setupUi

    void retranslateUi(QWidget *KInformationRegistration)
    {
        KInformationRegistration->setWindowTitle(QApplication::translate("KInformationRegistration", "Form", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(m_check_in), QApplication::translate("KInformationRegistration", "\347\231\273\350\256\260\345\205\245\344\275\217", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(m_check_out), QApplication::translate("KInformationRegistration", "\351\200\200\346\210\277\346\223\215\344\275\234", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(m_check_search), QApplication::translate("KInformationRegistration", "\347\273\274\345\220\210\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KInformationRegistration: public Ui_KInformationRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KROOMINFORMATION_H
