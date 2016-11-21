/********************************************************************************
** Form generated from reading UI file 'test2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_H
#define UI_TEST2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test2Class
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *test2Class)
    {
        if (test2Class->objectName().isEmpty())
            test2Class->setObjectName(QString::fromUtf8("test2Class"));
        test2Class->resize(400, 300);
        pushButton = new QPushButton(test2Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 230, 80, 28));
        textEdit = new QTextEdit(test2Class);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 50, 104, 75));

        retranslateUi(test2Class);

        QMetaObject::connectSlotsByName(test2Class);
    } // setupUi

    void retranslateUi(QWidget *test2Class)
    {
        test2Class->setWindowTitle(QApplication::translate("test2Class", "test2", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("test2Class", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class test2Class: public Ui_test2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_H
