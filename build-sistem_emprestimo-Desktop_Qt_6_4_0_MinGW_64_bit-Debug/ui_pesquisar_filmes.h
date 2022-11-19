/********************************************************************************
** Form generated from reading UI file 'pesquisar_filmes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESQUISAR_FILMES_H
#define UI_PESQUISAR_FILMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_pesquisar_filmes
{
public:
    QLineEdit *line_pesquisa;
    QPushButton *Button_busca;
    QTableWidget *lista_de_itens;
    QLabel *label;
    QSplitter *splitter;
    QLabel *label_2;
    QLineEdit *line_username;
    QLabel *label_3;
    QLineEdit *line_senha;
    QPushButton *Button_emprestar;

    void setupUi(QDialog *pesquisar_filmes)
    {
        if (pesquisar_filmes->objectName().isEmpty())
            pesquisar_filmes->setObjectName("pesquisar_filmes");
        pesquisar_filmes->resize(734, 359);
        line_pesquisa = new QLineEdit(pesquisar_filmes);
        line_pesquisa->setObjectName("line_pesquisa");
        line_pesquisa->setGeometry(QRect(10, 10, 411, 24));
        Button_busca = new QPushButton(pesquisar_filmes);
        Button_busca->setObjectName("Button_busca");
        Button_busca->setGeometry(QRect(430, 10, 80, 24));
        lista_de_itens = new QTableWidget(pesquisar_filmes);
        lista_de_itens->setObjectName("lista_de_itens");
        lista_de_itens->setGeometry(QRect(10, 40, 501, 311));
        label = new QLabel(pesquisar_filmes);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 330, 201, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        splitter = new QSplitter(pesquisar_filmes);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(540, 90, 171, 141));
        splitter->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter);
        label_2->setObjectName("label_2");
        splitter->addWidget(label_2);
        line_username = new QLineEdit(splitter);
        line_username->setObjectName("line_username");
        splitter->addWidget(line_username);
        label_3 = new QLabel(splitter);
        label_3->setObjectName("label_3");
        splitter->addWidget(label_3);
        line_senha = new QLineEdit(splitter);
        line_senha->setObjectName("line_senha");
        splitter->addWidget(line_senha);
        Button_emprestar = new QPushButton(splitter);
        Button_emprestar->setObjectName("Button_emprestar");
        splitter->addWidget(Button_emprestar);

        retranslateUi(pesquisar_filmes);

        QMetaObject::connectSlotsByName(pesquisar_filmes);
    } // setupUi

    void retranslateUi(QDialog *pesquisar_filmes)
    {
        pesquisar_filmes->setWindowTitle(QCoreApplication::translate("pesquisar_filmes", "Dialog", nullptr));
        Button_busca->setText(QCoreApplication::translate("pesquisar_filmes", "Buscar", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("pesquisar_filmes", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("pesquisar_filmes", "Senha:", nullptr));
        Button_emprestar->setText(QCoreApplication::translate("pesquisar_filmes", "Emprestar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pesquisar_filmes: public Ui_pesquisar_filmes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESQUISAR_FILMES_H
