/********************************************************************************
** Form generated from reading UI file 'subsistemaindicadores.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSISTEMAINDICADORES_H
#define UI_SUBSISTEMAINDICADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_subsistemaIndicadores
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *subsistemaIndicadores)
    {
        if (subsistemaIndicadores->objectName().isEmpty())
            subsistemaIndicadores->setObjectName(QString::fromUtf8("subsistemaIndicadores"));
        subsistemaIndicadores->resize(989, 638);
        pushButton = new QPushButton(subsistemaIndicadores);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 320, 93, 28));

        retranslateUi(subsistemaIndicadores);

        QMetaObject::connectSlotsByName(subsistemaIndicadores);
    } // setupUi

    void retranslateUi(QDialog *subsistemaIndicadores)
    {
        subsistemaIndicadores->setWindowTitle(QCoreApplication::translate("subsistemaIndicadores", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("subsistemaIndicadores", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class subsistemaIndicadores: public Ui_subsistemaIndicadores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSISTEMAINDICADORES_H
