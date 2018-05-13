/********************************************************************************
** Form generated from reading UI file 'exampleimage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLEIMAGE_H
#define UI_EXAMPLEIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exampleImage
{
public:
    QLabel *label;

    void setupUi(QWidget *exampleImage)
    {
        if (exampleImage->objectName().isEmpty())
            exampleImage->setObjectName(QStringLiteral("exampleImage"));
        exampleImage->resize(640, 480);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/kiwiIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exampleImage->setWindowIcon(icon);
        label = new QLabel(exampleImage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 551, 471));
        label->setPixmap(QPixmap(QString::fromUtf8("Resources/exemplo.png")));

        retranslateUi(exampleImage);

        QMetaObject::connectSlotsByName(exampleImage);
    } // setupUi

    void retranslateUi(QWidget *exampleImage)
    {
        exampleImage->setWindowTitle(QApplication::translate("exampleImage", "Exemplo de casa", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class exampleImage: public Ui_exampleImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLEIMAGE_H
