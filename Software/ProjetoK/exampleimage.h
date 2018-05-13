#ifndef EXAMPLEIMAGE_H
#define EXAMPLEIMAGE_H

#include <QWidget>

namespace Ui {
class exampleImage;
}

class exampleImage : public QWidget
{
    Q_OBJECT

public:
    explicit exampleImage(QWidget *parent = 0);
    ~exampleImage();

private:
    Ui::exampleImage *ui;
};

#endif // EXAMPLEIMAGE_H
