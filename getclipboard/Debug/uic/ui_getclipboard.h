/********************************************************************************
** Form generated from reading UI file 'getclipboard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETCLIPBOARD_H
#define UI_GETCLIPBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_getclipboardClass
{
public:
    QWidget *centralWidget;
    QPushButton *start_btn;
    QTextBrowser *clipboard_text;
    QPushButton *clear_btn;
    QPushButton *copy_btn;
    QLabel *latest_label;
    QPushButton *stop_btn;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *getclipboardClass)
    {
        if (getclipboardClass->objectName().isEmpty())
            getclipboardClass->setObjectName(QStringLiteral("getclipboardClass"));
        getclipboardClass->resize(331, 788);
        centralWidget = new QWidget(getclipboardClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        start_btn = new QPushButton(centralWidget);
        start_btn->setObjectName(QStringLiteral("start_btn"));
        start_btn->setGeometry(QRect(10, 0, 51, 23));
        clipboard_text = new QTextBrowser(centralWidget);
        clipboard_text->setObjectName(QStringLiteral("clipboard_text"));
        clipboard_text->setGeometry(QRect(10, 50, 301, 701));
        clear_btn = new QPushButton(centralWidget);
        clear_btn->setObjectName(QStringLiteral("clear_btn"));
        clear_btn->setGeometry(QRect(170, 10, 75, 23));
        copy_btn = new QPushButton(centralWidget);
        copy_btn->setObjectName(QStringLiteral("copy_btn"));
        copy_btn->setGeometry(QRect(80, 10, 75, 23));
        latest_label = new QLabel(centralWidget);
        latest_label->setObjectName(QStringLiteral("latest_label"));
        latest_label->setGeometry(QRect(260, 20, 54, 12));
        stop_btn = new QPushButton(centralWidget);
        stop_btn->setObjectName(QStringLiteral("stop_btn"));
        stop_btn->setGeometry(QRect(10, 20, 51, 23));
        getclipboardClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(getclipboardClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        getclipboardClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(getclipboardClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        getclipboardClass->setStatusBar(statusBar);

        retranslateUi(getclipboardClass);

        QMetaObject::connectSlotsByName(getclipboardClass);
    } // setupUi

    void retranslateUi(QMainWindow *getclipboardClass)
    {
        getclipboardClass->setWindowTitle(QApplication::translate("getclipboardClass", "getclipboard", Q_NULLPTR));
        start_btn->setText(QApplication::translate("getclipboardClass", "\345\274\200\345\247\213", Q_NULLPTR));
        clear_btn->setText(QApplication::translate("getclipboardClass", "\346\270\205\347\251\272\345\206\205\345\256\271", Q_NULLPTR));
        copy_btn->setText(QApplication::translate("getclipboardClass", "\345\244\215\345\210\266", Q_NULLPTR));
        latest_label->setText(QApplication::translate("getclipboardClass", "TextLabel", Q_NULLPTR));
        stop_btn->setText(QApplication::translate("getclipboardClass", "\345\201\234\346\255\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class getclipboardClass: public Ui_getclipboardClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETCLIPBOARD_H
