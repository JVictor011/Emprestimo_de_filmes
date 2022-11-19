/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *aviso;
    QSplitter *splitter;
    QLabel *nome_label;
    QLineEdit *line_nome;
    QLabel *senha_label;
    QLineEdit *line_senha;
    QSplitter *splitter_2;
    QPushButton *cadastro_button;
    QPushButton *login_button;
    QWidget *widget;
    QWidget *widget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName("JanelaLogin");
        JanelaLogin->resize(460, 346);
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 260, 391, 51));
        aviso = new QLabel(centralwidget);
        aviso->setObjectName("aviso");
        aviso->setGeometry(QRect(148, 30, 151, 20));
        aviso->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(150, 60, 151, 131));
        splitter->setOrientation(Qt::Vertical);
        nome_label = new QLabel(splitter);
        nome_label->setObjectName("nome_label");
        splitter->addWidget(nome_label);
        line_nome = new QLineEdit(splitter);
        line_nome->setObjectName("line_nome");
        splitter->addWidget(line_nome);
        senha_label = new QLabel(splitter);
        senha_label->setObjectName("senha_label");
        splitter->addWidget(senha_label);
        line_senha = new QLineEdit(splitter);
        line_senha->setObjectName("line_senha");
        line_senha->setEchoMode(QLineEdit::Password);
        splitter->addWidget(line_senha);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(150, 200, 151, 24));
        splitter_2->setOrientation(Qt::Horizontal);
        cadastro_button = new QPushButton(splitter_2);
        cadastro_button->setObjectName("cadastro_button");
        splitter_2->addWidget(cadastro_button);
        login_button = new QPushButton(splitter_2);
        login_button->setObjectName("login_button");
        splitter_2->addWidget(login_button);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-1, -21, 471, 351));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 209, 255), stop:1 rgba(255, 255, 255, 255));"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(140, 69, 171, 191));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        JanelaLogin->setCentralWidget(centralwidget);
        widget->raise();
        label->raise();
        aviso->raise();
        splitter->raise();
        splitter_2->raise();
        menubar = new QMenuBar(JanelaLogin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 460, 21));
        JanelaLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaLogin);
        statusbar->setObjectName("statusbar");
        JanelaLogin->setStatusBar(statusbar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QCoreApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        label->setText(QString());
        aviso->setText(QString());
        nome_label->setText(QCoreApplication::translate("JanelaLogin", "Nome", nullptr));
        senha_label->setText(QCoreApplication::translate("JanelaLogin", "Senha", nullptr));
        cadastro_button->setText(QCoreApplication::translate("JanelaLogin", "Cadastro", nullptr));
        login_button->setText(QCoreApplication::translate("JanelaLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
