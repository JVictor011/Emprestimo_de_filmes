#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "tela_inicial.h"
#include "create_new_user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaLogin; }
QT_END_NAMESPACE

class JanelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    JanelaLogin(QWidget *parent = nullptr);
    ~JanelaLogin();

private slots:
    void on_login_button_clicked();

    void on_cadastro_button_clicked();

private:
    Ui::JanelaLogin *ui;
};

class tela_login{
private:
    QString nome;
    QString senha;
public:
    tela_login(QString new_nome, QString new_senha):nome(new_nome), senha(new_senha){}

    void set_nome(QString new_nome){
        nome = new_nome;
    }
    QString get_nome(){
        return nome;
    }
    void set_senha(QString new_senha){
        senha = new_senha;
    }
    QString get_senha(){
        return senha;
    }
    int login(){
        QSqlQuery query;
        int contador = 0;

        if(query.exec("SELECT * FROM info_login where nome='"+nome+"' and senha='"+senha+"'")){
            while(query.next()){
                contador++;
            }
        }
        return contador;
    }
};


#endif // JANELALOGIN_H
