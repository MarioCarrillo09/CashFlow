#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <QDialog>

namespace Ui {
class menuPrincipal;
}

class menuPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit menuPrincipal(QWidget *parent = nullptr);
    ~menuPrincipal();

signals:
    void back();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menuPrincipal *ui;
};

#endif // MENUPRINCIPAL_H
