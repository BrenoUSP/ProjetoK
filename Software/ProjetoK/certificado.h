#ifndef CERTIFICADO_H
#define CERTIFICADO_H

#include <QWidget>

namespace Ui {
class Certificado;
}

class Certificado : public QWidget
{
    Q_OBJECT

public:
    explicit Certificado(QWidget *parent = 0);
    ~Certificado();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Certificado *ui;
};

#endif // CERTIFICADO_H
