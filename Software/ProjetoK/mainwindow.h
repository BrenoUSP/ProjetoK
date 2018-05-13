#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QMessageBox>
#include <QWidget>
#include <Qt>
#include <QDesktopWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QImage>

namespace Ui {
class MainWindow;
}

class QPainter;
class QImage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

protected:
    void paintEvent(QPaintEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;

private:
    Ui::MainWindow *ui;
    QPainter *mPainter;
    QImage *mImage;
    QPoint mBegin;
    QPoint mEnd;
    bool mEnabled;
};

#endif // MAINWINDOW_H
