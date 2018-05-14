/********************************************************************************
** Form generated from reading UI file 'certificado.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICADO_H
#define UI_CERTIFICADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Certificado
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Certificado)
    {
        if (Certificado->objectName().isEmpty())
            Certificado->setObjectName(QStringLiteral("Certificado"));
        Certificado->resize(749, 540);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/kiwiIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Certificado->setWindowIcon(icon);
        label = new QLabel(Certificado);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 721, 451));
        label->setPixmap(QPixmap(QString::fromUtf8("Resources/certificado.png")));
        pushButton = new QPushButton(Certificado);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 490, 91, 23));

        retranslateUi(Certificado);

        QMetaObject::connectSlotsByName(Certificado);
    } // setupUi

    void retranslateUi(QWidget *Certificado)
    {
        Certificado->setWindowTitle(QApplication::translate("Certificado", "Certificado de Engenharia", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Certificado", "XUPA CAASO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Certificado: public Ui_Certificado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICADO_H
