/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *gui)
    {
        if (gui->objectName().isEmpty())
            gui->setObjectName(QString::fromUtf8("gui"));
        gui->resize(400, 300);
        menuBar = new QMenuBar(gui);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        gui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(gui);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        gui->addToolBar(mainToolBar);
        centralWidget = new QWidget(gui);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gui->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(gui);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        gui->setStatusBar(statusBar);

        retranslateUi(gui);

        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QMainWindow *gui)
    {
        gui->setWindowTitle(QApplication::translate("gui", "gui", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
