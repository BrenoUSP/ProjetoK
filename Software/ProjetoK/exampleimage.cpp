#include "exampleimage.h"
#include "ui_exampleimage.h"

exampleImage::exampleImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::exampleImage)
{
    ui->setupUi(this);
}

exampleImage::~exampleImage()
{
    delete ui;
}
