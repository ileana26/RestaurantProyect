#include "iniciosesion.h"
#include "ui_iniciosesion.h"

InicioSesion::InicioSesion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InicioSesion)
{
    ui->setupUi(this);
    qDebug() << "hola";
}

InicioSesion::~InicioSesion()
{
    delete ui;
}

