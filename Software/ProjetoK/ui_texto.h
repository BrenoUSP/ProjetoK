/********************************************************************************
** Form generated from reading UI file 'texto.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTO_H
#define UI_TEXTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Texto
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Texto)
    {
        if (Texto->objectName().isEmpty())
            Texto->setObjectName(QStringLiteral("Texto"));
        Texto->resize(640, 480);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/kiwiIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Texto->setWindowIcon(icon);
        textBrowser = new QTextBrowser(Texto);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 571, 341));
        pushButton = new QPushButton(Texto);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 440, 75, 23));
        pushButton_2 = new QPushButton(Texto);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 440, 75, 23));
        label = new QLabel(Texto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 410, 541, 20));
        label_2 = new QLabel(Texto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 541, 16));

        retranslateUi(Texto);

        QMetaObject::connectSlotsByName(Texto);
    } // setupUi

    void retranslateUi(QWidget *Texto)
    {
        Texto->setWindowTitle(QApplication::translate("Texto", "Texto", nullptr));
        textBrowser->setHtml(QApplication::translate("Texto", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("Texto", "Sim", nullptr));
        pushButton_2->setText(QApplication::translate("Texto", "N\303\243o", nullptr));
        label->setText(QApplication::translate("Texto", "Voc\303\252 se sente bem com o texto acima? Sen\303\243o, n\303\243o vale a pena prosseguir com o programa.", nullptr));
        label_2->setText(QApplication::translate("Texto", "Texto produzido em 23/04/2018. Foi escondido na pasta do \"jogo da fazenda\".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Texto: public Ui_Texto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTO_H
