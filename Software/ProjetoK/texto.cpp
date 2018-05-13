#include "texto.h"
#include "mainwindow.h"
#include "ui_texto.h"
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>

Texto::Texto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Texto)
{
    ui->setupUi(this);

    QFile file("C:/Stardew.Valley.v1.2.31/SmartSteamEmu/Common/218620/systemcfg.txt");

    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "info", "Não foi encontrado o texto que tinha escondido quando arrumei seu notebook.");
    } else {
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        file.close();
    }

}

Texto::~Texto()
{
    delete ui;
}

void Texto::on_pushButton_2_clicked()
{
    QApplication::quit();
}

void Texto::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow();
    w->showMaximized();
    close();
}
