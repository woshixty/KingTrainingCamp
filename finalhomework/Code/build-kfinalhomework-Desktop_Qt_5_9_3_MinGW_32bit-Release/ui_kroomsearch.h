/********************************************************************************
** Form generated from reading UI file 'kroomsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KROOMSEARCH_H
#define UI_KROOMSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KRoomSearch
{
public:

    void setupUi(QWidget *KRoomSearch)
    {
        if (KRoomSearch->objectName().isEmpty())
            KRoomSearch->setObjectName(QStringLiteral("KRoomSearch"));
        KRoomSearch->resize(740, 408);

        retranslateUi(KRoomSearch);

        QMetaObject::connectSlotsByName(KRoomSearch);
    } // setupUi

    void retranslateUi(QWidget *KRoomSearch)
    {
        KRoomSearch->setWindowTitle(QApplication::translate("KRoomSearch", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KRoomSearch: public Ui_KRoomSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KROOMSEARCH_H
