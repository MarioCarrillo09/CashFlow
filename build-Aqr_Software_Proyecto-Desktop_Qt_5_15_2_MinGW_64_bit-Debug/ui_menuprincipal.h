/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuPrincipal
{
public:
    QPushButton *pushButton_4;
    QPushButton *buttonFlujoEfectivo;
    QLabel *labelEncabezado;
    QPushButton *buttonIndicadores;
    QPushButton *pushButton;

    void setupUi(QDialog *menuPrincipal)
    {
        if (menuPrincipal->objectName().isEmpty())
            menuPrincipal->setObjectName(QString::fromUtf8("menuPrincipal"));
        menuPrincipal->resize(946, 619);
        pushButton_4 = new QPushButton(menuPrincipal);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(650, 260, 141, 71));
        buttonFlujoEfectivo = new QPushButton(menuPrincipal);
        buttonFlujoEfectivo->setObjectName(QString::fromUtf8("buttonFlujoEfectivo"));
        buttonFlujoEfectivo->setGeometry(QRect(100, 260, 141, 71));
        labelEncabezado = new QLabel(menuPrincipal);
        labelEncabezado->setObjectName(QString::fromUtf8("labelEncabezado"));
        labelEncabezado->setGeometry(QRect(430, 40, 81, 61));
        QFont font;
        font.setPointSize(20);
        labelEncabezado->setFont(font);
        buttonIndicadores = new QPushButton(menuPrincipal);
        buttonIndicadores->setObjectName(QString::fromUtf8("buttonIndicadores"));
        buttonIndicadores->setGeometry(QRect(380, 260, 141, 71));
        pushButton = new QPushButton(menuPrincipal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(830, 550, 93, 28));

        retranslateUi(menuPrincipal);

        QMetaObject::connectSlotsByName(menuPrincipal);
    } // setupUi

    void retranslateUi(QDialog *menuPrincipal)
    {
        menuPrincipal->setWindowTitle(QCoreApplication::translate("menuPrincipal", "Dialog", nullptr));
        pushButton_4->setText(QCoreApplication::translate("menuPrincipal", "Categor\303\255as", nullptr));
        buttonFlujoEfectivo->setText(QCoreApplication::translate("menuPrincipal", "Flujo de efectibo", nullptr));
        labelEncabezado->setText(QCoreApplication::translate("menuPrincipal", "Men\303\272", nullptr));
        buttonIndicadores->setText(QCoreApplication::translate("menuPrincipal", "Indicadores de dinero", nullptr));
        pushButton->setText(QCoreApplication::translate("menuPrincipal", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuPrincipal: public Ui_menuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
