/********************************************************************************
** Form generated from reading UI file 'insert_filme.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_FILME_H
#define UI_INSERT_FILME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_insert_filme
{
public:
    QPushButton *Button_add;
    QLabel *label_5;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *line_nome;
    QLabel *label_2;
    QLineEdit *line_diretor;
    QLabel *label_3;
    QLineEdit *line_genero;
    QLabel *label_4;
    QLineEdit *line_estudio;
    QLabel *label_6;
    QLabel *label_9;
    QSplitter *splitter_2;
    QLabel *label_7;
    QLineEdit *line_username;
    QLabel *label_8;
    QLineEdit *line_senha;

    void setupUi(QDialog *insert_filme)
    {
        if (insert_filme->objectName().isEmpty())
            insert_filme->setObjectName("insert_filme");
        insert_filme->resize(400, 362);
        Button_add = new QPushButton(insert_filme);
        Button_add->setObjectName("Button_add");
        Button_add->setGeometry(QRect(170, 330, 80, 21));
        label_5 = new QLabel(insert_filme);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 10, 211, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 900 italic 20pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        splitter = new QSplitter(insert_filme);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(60, 50, 291, 211));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        line_nome = new QLineEdit(splitter);
        line_nome->setObjectName("line_nome");
        splitter->addWidget(line_nome);
        label_2 = new QLabel(splitter);
        label_2->setObjectName("label_2");
        splitter->addWidget(label_2);
        line_diretor = new QLineEdit(splitter);
        line_diretor->setObjectName("line_diretor");
        splitter->addWidget(line_diretor);
        label_3 = new QLabel(splitter);
        label_3->setObjectName("label_3");
        splitter->addWidget(label_3);
        line_genero = new QLineEdit(splitter);
        line_genero->setObjectName("line_genero");
        splitter->addWidget(line_genero);
        label_4 = new QLabel(splitter);
        label_4->setObjectName("label_4");
        splitter->addWidget(label_4);
        line_estudio = new QLineEdit(splitter);
        line_estudio->setObjectName("line_estudio");
        splitter->addWidget(line_estudio);
        label_6 = new QLabel(insert_filme);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-2, 260, 401, 20));
        label_9 = new QLabel(insert_filme);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 310, 401, 10));
        splitter_2 = new QSplitter(insert_filme);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(0, 280, 391, 24));
        splitter_2->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_2);
        label_7->setObjectName("label_7");
        splitter_2->addWidget(label_7);
        line_username = new QLineEdit(splitter_2);
        line_username->setObjectName("line_username");
        splitter_2->addWidget(line_username);
        label_8 = new QLabel(splitter_2);
        label_8->setObjectName("label_8");
        splitter_2->addWidget(label_8);
        line_senha = new QLineEdit(splitter_2);
        line_senha->setObjectName("line_senha");
        line_senha->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(line_senha);

        retranslateUi(insert_filme);

        QMetaObject::connectSlotsByName(insert_filme);
    } // setupUi

    void retranslateUi(QDialog *insert_filme)
    {
        insert_filme->setWindowTitle(QCoreApplication::translate("insert_filme", "Dialog", nullptr));
        Button_add->setText(QCoreApplication::translate("insert_filme", "Adicionar", nullptr));
        label_5->setText(QCoreApplication::translate("insert_filme", "Adicionar Filme", nullptr));
        label->setText(QCoreApplication::translate("insert_filme", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("insert_filme", "Diretor:", nullptr));
        label_3->setText(QCoreApplication::translate("insert_filme", "Genero:", nullptr));
        label_4->setText(QCoreApplication::translate("insert_filme", "Estudio:", nullptr));
        label_6->setText(QCoreApplication::translate("insert_filme", "--------------------------------------------------------------------------------", nullptr));
        label_9->setText(QCoreApplication::translate("insert_filme", "--------------------------------------------------------------------------------", nullptr));
        label_7->setText(QCoreApplication::translate("insert_filme", "Username:", nullptr));
        label_8->setText(QCoreApplication::translate("insert_filme", "Senha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_filme: public Ui_insert_filme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_FILME_H
