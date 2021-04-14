/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QPushButton *pushButton;
    QPushButton *Ingresar;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *inputPassword;
    QLabel *label_3;
    QLineEdit *inputUsername;
    QLabel *alertaLogin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(949, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(680, 250, 141, 23));
        Ingresar = new QPushButton(centralwidget);
        Ingresar->setObjectName(QString::fromUtf8("Ingresar"));
        Ingresar->setGeometry(QRect(320, 390, 101, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 280, 71, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 40, 371, 51));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setWordWrap(false);
        inputPassword = new QLineEdit(centralwidget);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(270, 310, 211, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 160, 55, 16));
        inputUsername = new QLineEdit(centralwidget);
        inputUsername->setObjectName(QString::fromUtf8("inputUsername"));
        inputUsername->setGeometry(QRect(270, 190, 211, 31));
        alertaLogin = new QLabel(centralwidget);
        alertaLogin->setObjectName(QString::fromUtf8("alertaLogin"));
        alertaLogin->setGeometry(QRect(230, 480, 261, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 949, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Database Connection", nullptr));
        Ingresar->setText(QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Bienveido a CashFlow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        alertaLogin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
