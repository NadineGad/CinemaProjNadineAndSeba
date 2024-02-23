/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLineEdit *lineEditUsername;
    QLabel *labelUsername;
    QLabel *labelPass;
    QLabel *labelRetype;
    QLineEdit *lineEditRetype;
    QLineEdit *lineEditPass;
    QGroupBox *groupBoxDoB;
    QComboBox *comboBoxMonth;
    QLabel *labelMonth;
    QLabel *labelDay;
    QLineEdit *lineEditDay;
    QLabel *labelYear;
    QLineEdit *lineEditYear;
    QGroupBox *groupBoxGender;
    QRadioButton *radioButtonMale;
    QRadioButton *radioButtonFemale;
    QGroupBox *groupBoxAccType;
    QRadioButton *radioButtonUser;
    QRadioButton *radioButtonAdmin;
    QGroupBox *groupBoxFavGenre;
    QCheckBox *checkBoxAction;
    QCheckBox *checkBoxDrama;
    QCheckBox *checkBoxHorror;
    QCheckBox *checkBoxComedy;
    QCheckBox *checkBoxRomance;
    QCheckBox *checkBoxOther;
    QPushButton *pushButtonRegister;
    QLabel *labelAlrExisting;
    QLabel *labelNotMatching;
    QLabel *labelAgeError;
    QLabel *label_4;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(812, 640);
        lineEditUsername = new QLineEdit(RegisterWindow);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(220, 40, 211, 28));
        labelUsername = new QLabel(RegisterWindow);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(80, 50, 71, 20));
        labelPass = new QLabel(RegisterWindow);
        labelPass->setObjectName("labelPass");
        labelPass->setGeometry(QRect(80, 100, 71, 20));
        labelRetype = new QLabel(RegisterWindow);
        labelRetype->setObjectName("labelRetype");
        labelRetype->setGeometry(QRect(80, 150, 121, 20));
        lineEditRetype = new QLineEdit(RegisterWindow);
        lineEditRetype->setObjectName("lineEditRetype");
        lineEditRetype->setGeometry(QRect(220, 150, 211, 28));
        lineEditRetype->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        lineEditPass = new QLineEdit(RegisterWindow);
        lineEditPass->setObjectName("lineEditPass");
        lineEditPass->setGeometry(QRect(220, 100, 211, 28));
        lineEditPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        groupBoxDoB = new QGroupBox(RegisterWindow);
        groupBoxDoB->setObjectName("groupBoxDoB");
        groupBoxDoB->setGeometry(QRect(80, 190, 351, 121));
        comboBoxMonth = new QComboBox(groupBoxDoB);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(10, 70, 82, 28));
        labelMonth = new QLabel(groupBoxDoB);
        labelMonth->setObjectName("labelMonth");
        labelMonth->setGeometry(QRect(10, 40, 63, 20));
        labelDay = new QLabel(groupBoxDoB);
        labelDay->setObjectName("labelDay");
        labelDay->setGeometry(QRect(120, 40, 63, 20));
        lineEditDay = new QLineEdit(groupBoxDoB);
        lineEditDay->setObjectName("lineEditDay");
        lineEditDay->setGeometry(QRect(120, 70, 71, 28));
        labelYear = new QLabel(groupBoxDoB);
        labelYear->setObjectName("labelYear");
        labelYear->setGeometry(QRect(220, 40, 63, 20));
        lineEditYear = new QLineEdit(groupBoxDoB);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(220, 70, 71, 28));
        groupBoxGender = new QGroupBox(RegisterWindow);
        groupBoxGender->setObjectName("groupBoxGender");
        groupBoxGender->setGeometry(QRect(80, 320, 141, 101));
        radioButtonMale = new QRadioButton(groupBoxGender);
        radioButtonMale->setObjectName("radioButtonMale");
        radioButtonMale->setGeometry(QRect(10, 40, 112, 26));
        radioButtonFemale = new QRadioButton(groupBoxGender);
        radioButtonFemale->setObjectName("radioButtonFemale");
        radioButtonFemale->setGeometry(QRect(10, 70, 112, 26));
        groupBoxAccType = new QGroupBox(RegisterWindow);
        groupBoxAccType->setObjectName("groupBoxAccType");
        groupBoxAccType->setGeometry(QRect(270, 320, 161, 101));
        radioButtonUser = new QRadioButton(groupBoxAccType);
        radioButtonUser->setObjectName("radioButtonUser");
        radioButtonUser->setGeometry(QRect(10, 40, 112, 26));
        radioButtonAdmin = new QRadioButton(groupBoxAccType);
        radioButtonAdmin->setObjectName("radioButtonAdmin");
        radioButtonAdmin->setGeometry(QRect(10, 70, 112, 26));
        groupBoxFavGenre = new QGroupBox(RegisterWindow);
        groupBoxFavGenre->setObjectName("groupBoxFavGenre");
        groupBoxFavGenre->setGeometry(QRect(80, 430, 351, 121));
        checkBoxAction = new QCheckBox(groupBoxFavGenre);
        checkBoxAction->setObjectName("checkBoxAction");
        checkBoxAction->setGeometry(QRect(10, 30, 93, 26));
        checkBoxDrama = new QCheckBox(groupBoxFavGenre);
        checkBoxDrama->setObjectName("checkBoxDrama");
        checkBoxDrama->setGeometry(QRect(140, 30, 93, 26));
        checkBoxHorror = new QCheckBox(groupBoxFavGenre);
        checkBoxHorror->setObjectName("checkBoxHorror");
        checkBoxHorror->setGeometry(QRect(140, 60, 93, 26));
        checkBoxComedy = new QCheckBox(groupBoxFavGenre);
        checkBoxComedy->setObjectName("checkBoxComedy");
        checkBoxComedy->setGeometry(QRect(10, 60, 93, 26));
        checkBoxRomance = new QCheckBox(groupBoxFavGenre);
        checkBoxRomance->setObjectName("checkBoxRomance");
        checkBoxRomance->setGeometry(QRect(10, 90, 93, 26));
        checkBoxOther = new QCheckBox(groupBoxFavGenre);
        checkBoxOther->setObjectName("checkBoxOther");
        checkBoxOther->setGeometry(QRect(140, 90, 93, 26));
        pushButtonRegister = new QPushButton(RegisterWindow);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setGeometry(QRect(80, 570, 121, 29));
        labelAlrExisting = new QLabel(RegisterWindow);
        labelAlrExisting->setObjectName("labelAlrExisting");
        labelAlrExisting->setGeometry(QRect(450, 40, 251, 20));
        labelNotMatching = new QLabel(RegisterWindow);
        labelNotMatching->setObjectName("labelNotMatching");
        labelNotMatching->setGeometry(QRect(450, 150, 251, 20));
        labelAgeError = new QLabel(RegisterWindow);
        labelAgeError->setObjectName("labelAgeError");
        labelAgeError->setGeometry(QRect(450, 260, 251, 20));
        label_4 = new QLabel(RegisterWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 570, 251, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        labelUsername->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        labelPass->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        labelRetype->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        groupBoxDoB->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "Apr", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sept", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        labelMonth->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        labelDay->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        labelYear->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        groupBoxGender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButtonMale->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButtonFemale->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBoxAccType->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButtonAdmin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBoxFavGenre->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBoxAction->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBoxDrama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBoxHorror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBoxComedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBoxRomance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBoxOther->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        labelAlrExisting->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        labelNotMatching->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Not Matching</span></p></body></html>", nullptr));
        labelAgeError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Age is less than 12</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*All fields must be filled</span></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
