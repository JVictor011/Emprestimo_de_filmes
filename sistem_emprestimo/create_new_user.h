#ifndef CREATE_NEW_USER_H
#define CREATE_NEW_USER_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class create_new_user;
}

class create_new_user : public QDialog
{
    Q_OBJECT

public:
    explicit create_new_user(QWidget *parent = nullptr);
    ~create_new_user();

private slots:
    void on_Button_cad_clicked();

private:
    Ui::create_new_user *ui;
};

class user{
private:
    QString nome;
    QString email;
    QString endereco;
    QString senha;
public:
    user(QString new_nome, QString new_email, QString new_endereco, QString new_senha):nome(new_nome),
        email(new_email),endereco(new_endereco), senha(new_senha){}

    void set_nome(QString new_nome){
        nome = new_nome;
    }
    QString get_nome(){
        return nome;
    }
    void set_email(QString new_email){
        email = new_email;
    }
    QString get_email(){
        return email;
    }
    void set_endereco(QString new_endereco){
        endereco = new_endereco;
    }
    QString get_endereco(){
        return endereco;
    }
    void set_senha(QString new_senha){
        senha = new_senha;
    }
    QString get_senha(){
        return senha;
    }
};

#endif // CREATE_NEW_USER_H
