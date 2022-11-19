#include "janelalogin.h"
#include "ui_janelalogin.h"

static QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);


    bancoDeDados.setDatabaseName("C:/Users/joaov/OneDrive/Documentos/trab/sistem_emprestimo/banco/banco.db");
    if(!bancoDeDados.open()){
        ui->label->setText("Desconectado!");
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

void JanelaLogin::on_login_button_clicked()
{
    QString nome_login=ui->line_nome->text();
    QString senha_login=ui->line_senha->text();

    if(!bancoDeDados.isOpen()){
        qDebug()<<"Banco não ta aberto";
        return;
    }

    QSqlQuery query;

    if(query.exec("SELECT * FROM info_login where nome='"+nome_login+"' and senha='"+senha_login+"'")){
        int contador = 0;
        while(query.next()){
            contador++;
        }

        if(contador > 0){
            this->close();
            tela_inicial t_inicial;
            t_inicial.setModal(true);
            t_inicial.exec();
        }else{
            ui->aviso->setText("Usuario ou senha incorreto!");
            ui->line_senha->clear();
            ui->line_nome->clear();
            ui->line_nome->setFocus();
        }
    }
}


void JanelaLogin::on_cadastro_button_clicked()
{
    create_new_user new_user;
    new_user.exec();
}

