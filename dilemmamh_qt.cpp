#include "dilemmamh_qt.h"
#include "ui_dilemmamh_qt.h"

Dilemmamh_qt::Dilemmamh_qt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dilemmamh_qt)
{
    ui->setupUi(this);
}

Dilemmamh_qt::~Dilemmamh_qt()
{
    delete ui;
}

void Dilemmamh_qt::on_pb_reset_clicked()
{
    this->nite=1000;
    le_numite.value=1000;


}
