/********************************************************************************
** Form generated from reading UI file 'tela_inicial.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_INICIAL_H
#define UI_TELA_INICIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_inicial
{
public:
    QPushButton *Button_add_filme;
    QPushButton *Button_pesq_filme;

    void setupUi(QDialog *tela_inicial)
    {
        if (tela_inicial->objectName().isEmpty())
            tela_inicial->setObjectName("tela_inicial");
        tela_inicial->resize(400, 300);
        Button_add_filme = new QPushButton(tela_inicial);
        Button_add_filme->setObjectName("Button_add_filme");
        Button_add_filme->setGeometry(QRect(10, 10, 380, 24));
        Button_pesq_filme = new QPushButton(tela_inicial);
        Button_pesq_filme->setObjectName("Button_pesq_filme");
        Button_pesq_filme->setGeometry(QRect(10, 50, 380, 24));

        retranslateUi(tela_inicial);

        QMetaObject::connectSlotsByName(tela_inicial);
    } // setupUi

    void retranslateUi(QDialog *tela_inicial)
    {
        tela_inicial->setWindowTitle(QCoreApplication::translate("tela_inicial", "Dialog", nullptr));
        Button_add_filme->setText(QCoreApplication::translate("tela_inicial", "Adicionar Filme", nullptr));
        Button_pesq_filme->setText(QCoreApplication::translate("tela_inicial", "Pesquisar Filme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_inicial: public Ui_tela_inicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_INICIAL_H
