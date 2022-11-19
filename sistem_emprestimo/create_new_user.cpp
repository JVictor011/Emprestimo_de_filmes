#include "create_new_user.h"
#include "ui_create_new_user.h"

create_new_user::create_new_user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_new_user)
{
    ui->setupUi(this);
}

create_new_user::~create_new_user()
{
    delete ui;
}

void create_new_user::on_Button_cad_clicked()
{
    user u(ui->line_nome->text(),ui->line_email->text(),ui->line_endereco->text(),ui->line_senha->text());

    QSqlQuery query;
    query.prepare("insert into info_login (nome,email,senha,endereco,pontos) values"
                  "('"+u.get_nome()+"','"+u.get_email()+"','"+u.get_senha()+"','"+u.get_endereco()+"','10')");
    if(query.exec()){
        ui->line_nome->clear();
        ui->line_email->clear();
        ui->line_endereco->clear();
        ui->line_senha->clear();
        ui->line_nome->setFocus();
    }else{
        qDebug()<<"Falha no cadastro!";
    }
}

