#include "mainwindow.h"
#include "ui_mainwindow.h"

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
