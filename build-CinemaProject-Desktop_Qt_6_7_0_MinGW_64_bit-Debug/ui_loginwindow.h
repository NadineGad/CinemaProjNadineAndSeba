/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

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

class Ui_LoginWIndow
{
public:
    QWidget *centralwidget;
    QLabel *labelusername;
    QLabel *labelPass;
    QPushButton *pushButtonLogin;
    QPushButton *pushButton_2;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPass;
    QLabel *labelError;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWIndow)
    {
        if (LoginWIndow->objectName().isEmpty())
            LoginWIndow->setObjectName("LoginWIndow");
        LoginWIndow->resize(800, 600);
        centralwidget = new QWidget(LoginWIndow);
        centralwidget->setObjectName("centralwidget");
        labelusername = new QLabel(centralwidget);
        labelusername->setObjectName("labelusername");
        labelusername->setGeometry(QRect(20, 50, 101, 20));
        labelPass = new QLabel(centralwidget);
        labelPass->setObjectName("labelPass");
        labelPass->setGeometry(QRect(20, 100, 101, 20));
        pushButtonLogin = new QPushButton(centralwidget);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(40, 190, 83, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 190, 83, 29));
        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(160, 50, 113, 28));
        lineEditPass = new QLineEdit(centralwidget);
        lineEditPass->setObjectName("lineEditPass");
        lineEditPass->setGeometry(QRect(160, 100, 113, 28));
        lineEditPass->setEchoMode(QLineEdit::Password);
        labelError = new QLabel(centralwidget);
        labelError->setObjectName("labelError");
        labelError->setGeometry(QRect(20, 150, 251, 20));
        LoginWIndow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWIndow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        LoginWIndow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWIndow);
        statusbar->setObjectName("statusbar");
        LoginWIndow->setStatusBar(statusbar);

        retranslateUi(LoginWIndow);

        QMetaObject::connectSlotsByName(LoginWIndow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWIndow)
    {
        LoginWIndow->setWindowTitle(QCoreApplication::translate("LoginWIndow", "LoginWIndow", nullptr));
        labelusername->setText(QCoreApplication::translate("LoginWIndow", "User Name", nullptr));
        labelPass->setText(QCoreApplication::translate("LoginWIndow", "Password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginWIndow", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWIndow", "Register", nullptr));
        lineEditPass->setText(QString());
        labelError->setText(QCoreApplication::translate("LoginWIndow", "<html><head/><body><p><span style=\" color:#aa0000;\">Error: Wrong Username or Password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWIndow: public Ui_LoginWIndow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
