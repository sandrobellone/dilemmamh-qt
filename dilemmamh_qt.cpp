/*!  dilemmamh-qt.cpp - versione 0.01
 *
 *   Copyright 2017 Sandro Bellone
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "dilemmamh_qt.h"
#include "ui_dilemmamh_qt.h"
#include <QtWidgets>

Dilemmamh_qt::Dilemmamh_qt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dilemmamh_qt)
{
    ui->setupUi(this);
    dmhObj=new dmh();
}

Dilemmamh_qt::~Dilemmamh_qt()
{
    delete ui;
}

void Dilemmamh_qt::on_pb_reset_clicked()
{
    ui->le_numite->setText("1000");
    ui->rb_r->setChecked(true);
}

void Dilemmamh_qt::on_pb_esci_clicked()
{
    exit(0);
}

void Dilemmamh_qt::on_pb_info_clicked()
{
    QMessageBox::about(this, tr("Informazioni sul programma"),
            tr("Software di simulazione del dilemma di Monty Hall\n"
               "Sandro Bellone\nFebbraio 2017\n\n"
               "Copyright 2017 Sandro Bellone\n"
               "GNU General Public License vers. 3\n\n"
               "Sviluppato con Qt Creator 3.5.1"));
}

void Dilemmamh_qt::on_pb_elabora_clicked()
{
    int numite; char t;
    numite=ui->le_numite->text().toInt();
    if (ui->rb_r->isChecked()) t='r';
    else if (ui->rb_s->isChecked()) t='s';
    else if (ui->rb_m->isChecked()) t='m';
    else t='a';
    dmhObj->elabora(numite,t);
    ui->le_numite_fatte->setText(QString::number( dmhObj->get_i()) );
    ui->le_nsu->setText(QString::number( dmhObj->get_nsu()) );
    ui->le_nsc->setText(QString::number( dmhObj->get_nsc()) );
    ui->le_nsusc->setText(QString::number( dmhObj->get_nsucs()) );
}
