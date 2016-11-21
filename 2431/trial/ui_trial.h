/********************************************************************************
** Form generated from reading UI file 'trial.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIAL_H
#define UI_TRIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trialClass
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *trialClass)
    {
        if (trialClass->objectName().isEmpty())
            trialClass->setObjectName(QString::fromUtf8("trialClass"));
        trialClass->resize(400, 300);
        pushButton = new QPushButton(trialClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 190, 80, 28));
        textEdit = new QTextEdit(trialClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(110, 50, 104, 75));

        retranslateUi(trialClass);

        QMetaObject::connectSlotsByName(trialClass);
    } // setupUi

    void retranslateUi(QWidget *trialClass)
    {
        trialClass->setWindowTitle(QApplication::translate("trialClass", "trial", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("trialClass", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class trialClass: public Ui_trialClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIAL_H
