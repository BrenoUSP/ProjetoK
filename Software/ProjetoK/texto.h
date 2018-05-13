#ifndef TEXTO_H
#define TEXTO_H

#include <QWidget>

namespace Ui {
class Texto;
}

class Texto : public QWidget
{
    Q_OBJECT

public:
    explicit Texto(QWidget *parent = 0);
    ~Texto();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Texto *ui;
};

#endif // TEXTO_H
