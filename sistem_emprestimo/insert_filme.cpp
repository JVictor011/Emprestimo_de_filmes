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
        QString username = ui->line_username->text();
        QString senha = ui->line_senha->text();
        QString status = "Disponivel";
        filmes f(ui->line_diretor->text(), ui->line_genero->text(), ui->line_estudio->text(),
                 ui->line_nome->text(), status, 10);

        QSqlQuery query;
        query.prepare("insert into iten_filmes (nome, diretor, genero, estudio, valor, status) values "
                      "('"+f.get_nome()+"','"+f.get_diretor()+"','"+f.get_genero()+"','"+f.get_estudio()+"',10,'"+f.get_status()+"')");
        if(query.exec()){
            ui->line_nome->clear();
            ui->line_diretor->clear();
            ui->line_estudio->clear();
            ui->line_genero->clear();
            ui->line_nome->setFocus();
            query.exec("UPDATE info_login SET pontos = pontos+10 WHERE nome = '"+username+"' AND senha = '"+senha+"'");
        }else{
            qDebug()<<"Falha na inserção";
        }
}

