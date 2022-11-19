/********************************************************************************
** Form generated from reading UI file 'create_new_user.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_NEW_USER_H
#define UI_CREATE_NEW_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_create_new_user
{
public:
    QLabel *label_5;
    QPushButton *Button_cad;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *line_nome;
    QLabel *label_2;
    QLineEdit *line_email;
    QLabel *label_3;
    QLineEdit *line_endereco;
    QLabel *label_4;
    QLineEdit *line_senha;

    void setupUi(QDialog *create_new_user)
    {
        if (create_new_user->objectName().isEmpty())
            create_new_user->setObjectName("create_new_user");
        create_new_user->resize(400, 300);
        label_5 = new QLabel(create_new_user);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 0, 111, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 900 italic 20pt \"Segoe UI\";\n"
"text-decoration: underline;\n"
"color: rgb(0, 0, 0);\n"
""));
        Button_cad = new QPushButton(create_new_user);
        Button_cad->setObjectName("Button_cad");
        Button_cad->setGeometry(QRect(160, 263, 80, 24));
        splitter = new QSplitter(create_new_user);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(70, 50, 251, 201));
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
        line_email = new QLineEdit(splitter);
        line_email->setObjectName("line_email");
        splitter->addWidget(line_email);
        label_3 = new QLabel(splitter);
        label_3->setObjectName("label_3");
        splitter->addWidget(label_3);
        line_endereco = new QLineEdit(splitter);
        line_endereco->setObjectName("line_endereco");
        splitter->addWidget(line_endereco);
        label_4 = new QLabel(splitter);
        label_4->setObjectName("label_4");
        splitter->addWidget(label_4);
        line_senha = new QLineEdit(splitter);
        line_senha->setObjectName("line_senha");
        splitter->addWidget(line_senha);

        retranslateUi(create_new_user);

        QMetaObject::connectSlotsByName(create_new_user);
    } // setupUi

    void retranslateUi(QDialog *create_new_user)
    {
        create_new_user->setWindowTitle(QCoreApplication::translate("create_new_user", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("create_new_user", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">Registro</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("create_new_user", "Registro", nullptr));
        Button_cad->setText(QCoreApplication::translate("create_new_user", "Cadastrar", nullptr));
        label->setText(QCoreApplication::translate("create_new_user", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("create_new_user", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("create_new_user", "Endere\303\247o:", nullptr));
        label_4->setText(QCoreApplication::translate("create_new_user", "Senha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class create_new_user: public Ui_create_new_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_NEW_USER_H
