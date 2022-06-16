/********************************************************************************
** Form generated from reading UI file 'kmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KMAINWINDOW_H
#define UI_KMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *m_sider;
    QStackedWidget *m_stack_pages;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KMainWindow)
    {
        if (KMainWindow->objectName().isEmpty())
            KMainWindow->setObjectName(QStringLiteral("KMainWindow"));
        KMainWindow->resize(898, 514);
        centralwidget = new QWidget(KMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_sider = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        m_sider->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(m_sider);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(m_sider);
        __qtreewidgetitem2->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(m_sider);
        __qtreewidgetitem3->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(m_sider);
        __qtreewidgetitem4->setTextAlignment(0, Qt::AlignCenter);
        m_sider->setObjectName(QStringLiteral("m_sider"));

        horizontalLayout->addWidget(m_sider);

        m_stack_pages = new QStackedWidget(centralwidget);
        m_stack_pages->setObjectName(QStringLiteral("m_stack_pages"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        m_stack_pages->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        m_stack_pages->addWidget(page_2);

        horizontalLayout->addWidget(m_stack_pages);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        KMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 898, 26));
        KMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(KMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        KMainWindow->setStatusBar(statusbar);

        retranslateUi(KMainWindow);

        QMetaObject::connectSlotsByName(KMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *KMainWindow)
    {
        KMainWindow->setWindowTitle(QApplication::translate("KMainWindow", "KMainWindow", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = m_sider->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("KMainWindow", "WPS\346\231\272\346\205\247\351\205\222\345\272\227", Q_NULLPTR));

        const bool __sortingEnabled = m_sider->isSortingEnabled();
        m_sider->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = m_sider->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("KMainWindow", "\344\273\212\346\227\245\344\273\267\346\240\274\344\277\241\346\201\257", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = m_sider->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("KMainWindow", "\345\256\242\346\210\277\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = m_sider->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("KMainWindow", "\345\256\242\346\210\277\344\277\241\346\201\257\347\231\273\350\256\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = m_sider->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("KMainWindow", "\345\221\230\345\267\245\344\277\241\346\201\257\345\275\225\345\205\245", Q_NULLPTR));
        m_sider->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class KMainWindow: public Ui_KMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KMAINWINDOW_H
