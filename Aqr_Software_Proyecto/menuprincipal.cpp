#include "menuprincipal.h"
#include "ui_menuprincipal.h"

menuPrincipal::menuPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuPrincipal)
{
    ui->setupUi(this);
}

menuPrincipal::~menuPrincipal()
{
    delete ui;
}

void menuPrincipal::on_pushButton_clicked()
{
    emit(back());
}
