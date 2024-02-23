/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *label;
    QLabel *labelWelcome;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(797, 603);
        label = new QLabel(WelcomeWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 63, 20));
        labelWelcome = new QLabel(WelcomeWindow);
        labelWelcome->setObjectName("labelWelcome");
        labelWelcome->setGeometry(QRect(350, 150, 181, 71));
        label_3 = new QLabel(WelcomeWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 120, 501, 291));
        pushButton = new QPushButton(WelcomeWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 490, 83, 29));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WelcomeWindow", "Hello", nullptr));
        labelWelcome->setText(QCoreApplication::translate("WelcomeWindow", "Welcome", nullptr));
        label_3->setText(QCoreApplication::translate("WelcomeWindow", "Image", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
