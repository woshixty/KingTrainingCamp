/********************************************************************************
** Form generated from reading UI file 'kemployeeinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEMPLOYEEINFORMATION_H
#define UI_KEMPLOYEEINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <view/innerpage/kemployeeregistration.h>
#include <view/innerpage/kemployeeupdate.h>

QT_BEGIN_NAMESPACE

class Ui_KEmployeeInformation
{
public:
    QGridLayout *gridLayout;
    QTabWidget *pages;
    KEmployeeRegistration *user_register;
    KEmployeeUpdate *info_update;

    void setupUi(QWidget *KEmployeeInformation)
    {
        if (KEmployeeInformation->objectName().isEmpty())
            KEmployeeInformation->setObjectName(QStringLiteral("KEmployeeInformation"));
        KEmployeeInformation->resize(640, 396);
        gridLayout = new QGridLayout(KEmployeeInformation);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pages = new QTabWidget(KEmployeeInformation);
        pages->setObjectName(QStringLiteral("pages"));
        pages->setStyleSheet(QStringLiteral(""));
        user_register = new KEmployeeRegistration();
        user_register->setObjectName(QStringLiteral("user_register"));
        pages->addTab(user_register, QString());
        info_update = new KEmployeeUpdate();
        info_update->setObjectName(QStringLiteral("info_update"));
        pages->addTab(info_update, QString());

        gridLayout->addWidget(pages, 0, 0, 1, 1);


        retranslateUi(KEmployeeInformation);

        pages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(KEmployeeInformation);
    } // setupUi

    void retranslateUi(QWidget *KEmployeeInformation)
    {
        KEmployeeInformation->setWindowTitle(QApplication::translate("KEmployeeInformation", "Form", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        pages->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pages->setTabText(pages->indexOf(user_register), QApplication::translate("KEmployeeInformation", "\345\221\230\345\267\245\344\277\241\346\201\257\346\263\250\345\206\214", Q_NULLPTR));
        pages->setTabText(pages->indexOf(info_update), QApplication::translate("KEmployeeInformation", "\345\221\230\345\267\245\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KEmployeeInformation: public Ui_KEmployeeInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEMPLOYEEINFORMATION_H
