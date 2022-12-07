#include "create_new_user.h"

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
    int cont = 0;
    new_user u(ui->line_nome->text(),ui->line_email->text(),ui->line_endereco->text(),ui->line_senha->text());
    cont = u.create_user();

    if(cont == 1){
        ui->line_nome->clear();
        ui->line_email->clear();
        ui->line_endereco->clear();
        ui->line_senha->clear();
        ui->line_nome->setFocus();
    }

}

