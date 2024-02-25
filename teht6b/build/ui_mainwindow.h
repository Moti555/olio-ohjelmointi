/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_num1;
    QLineEdit *lineEdit_num2;
    QLineEdit *lineEdit_result;
    QPushButton *buttonN1;
    QPushButton *buttonN2;
    QPushButton *buttonN3;
    QPushButton *buttonN4;
    QPushButton *buttonSub;
    QPushButton *buttonN5;
    QPushButton *buttonMul;
    QPushButton *buttonAdd;
    QPushButton *buttonN7;
    QPushButton *buttonN8;
    QPushButton *buttonN0;
    QPushButton *buttonEnter;
    QPushButton *buttonClear;
    QPushButton *buttonDiv;
    QPushButton *buttonN9;
    QPushButton *buttonN6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(409, 290);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 0, 61, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 0, 49, 16));
        lineEdit_num1 = new QLineEdit(centralwidget);
        lineEdit_num1->setObjectName("lineEdit_num1");
        lineEdit_num1->setGeometry(QRect(10, 20, 121, 24));
        lineEdit_num2 = new QLineEdit(centralwidget);
        lineEdit_num2->setObjectName("lineEdit_num2");
        lineEdit_num2->setGeometry(QRect(140, 20, 121, 24));
        lineEdit_result = new QLineEdit(centralwidget);
        lineEdit_result->setObjectName("lineEdit_result");
        lineEdit_result->setGeometry(QRect(270, 20, 121, 24));
        buttonN1 = new QPushButton(centralwidget);
        buttonN1->setObjectName("buttonN1");
        buttonN1->setGeometry(QRect(10, 70, 80, 24));
        buttonN2 = new QPushButton(centralwidget);
        buttonN2->setObjectName("buttonN2");
        buttonN2->setGeometry(QRect(110, 70, 80, 24));
        buttonN3 = new QPushButton(centralwidget);
        buttonN3->setObjectName("buttonN3");
        buttonN3->setGeometry(QRect(210, 70, 80, 24));
        buttonN4 = new QPushButton(centralwidget);
        buttonN4->setObjectName("buttonN4");
        buttonN4->setGeometry(QRect(10, 120, 80, 24));
        buttonSub = new QPushButton(centralwidget);
        buttonSub->setObjectName("buttonSub");
        buttonSub->setGeometry(QRect(310, 120, 80, 24));
        buttonN5 = new QPushButton(centralwidget);
        buttonN5->setObjectName("buttonN5");
        buttonN5->setGeometry(QRect(110, 120, 80, 24));
        buttonMul = new QPushButton(centralwidget);
        buttonMul->setObjectName("buttonMul");
        buttonMul->setGeometry(QRect(310, 170, 80, 24));
        buttonAdd = new QPushButton(centralwidget);
        buttonAdd->setObjectName("buttonAdd");
        buttonAdd->setGeometry(QRect(310, 70, 80, 24));
        buttonN7 = new QPushButton(centralwidget);
        buttonN7->setObjectName("buttonN7");
        buttonN7->setGeometry(QRect(10, 170, 80, 24));
        buttonN8 = new QPushButton(centralwidget);
        buttonN8->setObjectName("buttonN8");
        buttonN8->setGeometry(QRect(110, 170, 80, 24));
        buttonN0 = new QPushButton(centralwidget);
        buttonN0->setObjectName("buttonN0");
        buttonN0->setGeometry(QRect(10, 220, 80, 24));
        buttonEnter = new QPushButton(centralwidget);
        buttonEnter->setObjectName("buttonEnter");
        buttonEnter->setGeometry(QRect(210, 220, 80, 24));
        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(110, 220, 80, 24));
        buttonDiv = new QPushButton(centralwidget);
        buttonDiv->setObjectName("buttonDiv");
        buttonDiv->setGeometry(QRect(310, 220, 80, 24));
        buttonN9 = new QPushButton(centralwidget);
        buttonN9->setObjectName("buttonN9");
        buttonN9->setGeometry(QRect(210, 170, 80, 24));
        buttonN6 = new QPushButton(centralwidget);
        buttonN6->setObjectName("buttonN6");
        buttonN6->setGeometry(QRect(210, 120, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 409, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        buttonN1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        buttonN2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        buttonN3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        buttonN4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        buttonSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonN5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        buttonMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttonN7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        buttonN8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        buttonN0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        buttonEnter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        buttonDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        buttonN9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        buttonN6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
