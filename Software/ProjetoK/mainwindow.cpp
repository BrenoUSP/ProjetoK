#include "mainwindow.h"
#include "exampleimage.h"
#include "ui_mainwindow.h"
#include <iostream>

QElapsedTimer timer;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QPixmap pixmap("Resources/bar.png");
    QRect rec = QApplication::desktop()->screenGeometry();

    QIcon ButtonIcon(pixmap.scaled(rec.size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    ui->setupUi(this);
    ui->pushButton->setFixedWidth(rec.width());
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton_2->setEnabled(false);

    mImage = new QImage(rec.width(), 550, QImage::Format_ARGB32_Premultiplied);
    mPainter = new QPainter(mImage);
    mEnabled = false;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox messageBox;
    messageBox.critical(0,"Erro","Tá pensando que isso é Revit? -.-");
    messageBox.setFixedSize(500,200);
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.fillRect(mImage->rect(), Qt::white);
    painter.drawImage(0, 0, *mImage);
    e->accept();
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(timer.elapsed() > 60000){
        ui->pushButton_2->setEnabled(true);
    }

    mEnabled = true;
    mBegin = e->pos();
    e->accept();
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(timer.elapsed() > 60000){
        ui->pushButton_2->setEnabled(true);
    }

    if(!mEnabled){
        e->accept();
        return;
    }
    QPen pen(Qt::black);
    pen.setCapStyle(Qt::RoundCap);
    pen.setWidth(10);
    mEnd = e->pos();
    mPainter->setPen(pen);
    mPainter->drawLine(mBegin, mEnd);
    mBegin = mEnd;
    update();
    e->accept();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    mEnabled = false;
    e->accept();
}

void MainWindow::on_pushButton_3_clicked()
{
    //delete mImage;
    //delete mPainter;
    QRect rec = QApplication::desktop()->screenGeometry();
    mImage = new QImage(rec.width(), 550, QImage::Format_ARGB32_Premultiplied);
    mPainter = new QPainter(mImage);
    mEnabled = false;
}

void MainWindow::on_pushButton_4_clicked()
{
    exampleImage *w = new exampleImage();
    timer.start();
    w->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    // ABRE O CERTIFICADO E O VÍDEO
}
