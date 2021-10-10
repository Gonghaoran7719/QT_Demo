/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiona_chinese;
    QAction *actionb_English;
    QWidget *centralWidget;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menua;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(407, 318);
        actiona_chinese = new QAction(MainWindow);
        actiona_chinese->setObjectName(QStringLiteral("actiona_chinese"));
        actionb_English = new QAction(MainWindow);
        actionb_English->setObjectName(QStringLiteral("actionb_English"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(70, 10, 248, 197));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 210, 331, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font.setPointSize(15);
        label->setFont(font);
        label->setLineWidth(1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 407, 23));
        menua = new QMenu(menuBar);
        menua->setObjectName(QStringLiteral("menua"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menua->menuAction());
        menua->addAction(actiona_chinese);
        menua->addAction(actionb_English);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\254\254\344\270\200\344\270\252qt\347\250\213\345\272\217", Q_NULLPTR));
        actiona_chinese->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", Q_NULLPTR));
        actionb_English->setText(QApplication::translate("MainWindow", "English", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\345\205\263\346\263\250\345\276\256\344\277\241\345\205\254\344\274\227\345\217\267\343\200\220\347\274\226\347\250\213\345\255\246\344\271\240\345\237\272\345\234\260\343\200\221", Q_NULLPTR));
        menua->setTitle(QApplication::translate("MainWindow", "\350\257\255\350\250\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
