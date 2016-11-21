/********************************************************************************
** Form generated from reading UI file 'hello.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_H
#define UI_HELLO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloClass
{
public:
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QPushButton *pushButton;
    QLineEdit *lineEdit_8;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *helloClass)
    {
        if (helloClass->objectName().isEmpty())
            helloClass->setObjectName(QString::fromUtf8("helloClass"));
        helloClass->resize(694, 299);
        comboBox = new QComboBox(helloClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(350, 10, 75, 27));
        lineEdit = new QLineEdit(helloClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 10, 113, 28));
        lineEdit_2 = new QLineEdit(helloClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 130, 113, 31));
        lineEdit_3 = new QLineEdit(helloClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 50, 113, 28));
        lineEdit_4 = new QLineEdit(helloClass);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(110, 90, 113, 28));
        lineEdit_5 = new QLineEdit(helloClass);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(350, 60, 113, 28));
        lineEdit_6 = new QLineEdit(helloClass);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(350, 100, 113, 28));
        label = new QLabel(helloClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 54, 18));
        label_2 = new QLabel(helloClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 54, 18));
        label_3 = new QLabel(helloClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 90, 54, 18));
        label_4 = new QLabel(helloClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 130, 54, 18));
        label_5 = new QLabel(helloClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 100, 61, 20));
        label_6 = new QLabel(helloClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 10, 71, 20));
        label_7 = new QLabel(helloClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 170, 54, 18));
        label_8 = new QLabel(helloClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 70, 54, 18));
        lineEdit_7 = new QLineEdit(helloClass);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(350, 140, 113, 28));
        label_9 = new QLabel(helloClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(280, 140, 61, 20));
        pushButton = new QPushButton(helloClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 200, 201, 28));
        lineEdit_8 = new QLineEdit(helloClass);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(110, 170, 113, 61));
        label_10 = new QLabel(helloClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 240, 61, 20));
        lineEdit_9 = new QLineEdit(helloClass);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(360, 230, 113, 28));
        pushButton_2 = new QPushButton(helloClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 270, 111, 23));
        textEdit = new QTextEdit(helloClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(480, 10, 201, 271));

        retranslateUi(helloClass);

        QMetaObject::connectSlotsByName(helloClass);
    } // setupUi

    void retranslateUi(QWidget *helloClass)
    {
        helloClass->setWindowTitle(QApplication::translate("helloClass", "hello", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("helloClass", "A+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("helloClass", "A-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("helloClass", "AB+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("helloClass", "AB-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("helloClass", "B+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("helloClass", "B-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("helloClass", "O+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("helloClass", "O-", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("helloClass", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("helloClass", "D.O.B", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("helloClass", "Height", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("helloClass", "Weight", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("helloClass", "Mobile No.", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("helloClass", "Blood Group", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("helloClass", "Address", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("helloClass", "Insurance", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("helloClass", "License", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("helloClass", "SUBMIT ", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("helloClass", "Search ", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("helloClass", "Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class helloClass: public Ui_helloClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_H
