#include "certificado.h"
#include "ui_certificado.h"
#include <QApplication>
#include <QMessageBox>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QDesktopWidget>

Certificado::Certificado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Certificado)
{
    ui->setupUi(this);
}

Certificado::~Certificado()
{
    delete ui;
}

void Certificado::on_pushButton_clicked()
{
    QMessageBox messageBox;
    messageBox.information(0, "Surpresa", "Não vai no show do Simple Plan mas eu posso dar um show pra você ;)");
    messageBox.setFixedSize(500,200);
    QMediaPlayer *player = new QMediaPlayer;
    QVideoWidget *vw = new QVideoWidget;

    player->setVideoOutput(vw);

    player->setMedia(QUrl::fromLocalFile("Resources/Simple version.wmv"));

    QRect rec = QApplication::desktop()->screenGeometry();

    vw->setGeometry(rec.width()/2, 150, 600, 600);
    vw->show();

    player->play();
}
