#include "insert_filme.h"
#include "ui_insert_filme.h"

insert_filme::insert_filme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insert_filme)
{
    ui->setupUi(this);
}

insert_filme::~insert_filme()
{
    delete ui;
}

void insert_filme::on_Button_add_clicked()
{
    int cont = 0;
    QString username = ui->line_username->text();
    QString senha = ui->line_senha->text();
    QString status = "Disponivel";
    filmes f(ui->line_diretor->text(), ui->line_genero->text(), ui->line_estudio->text(),
                 ui->line_nome->text(), status, 10);
    cont = f.new_filme(username, senha);
    if(cont == 1){
        ui->line_nome->clear();
        ui->line_diretor->clear();
        ui->line_estudio->clear();
        ui->line_genero->clear();
        ui->line_nome->setFocus();
    }


}

