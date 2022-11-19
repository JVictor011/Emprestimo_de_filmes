#include "tela_inicial.h"
#include "ui_tela_inicial.h"


tela_inicial::tela_inicial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_inicial)
{
    ui->setupUi(this);
}

tela_inicial::~tela_inicial()
{
    delete ui;
}

void tela_inicial::on_Button_add_filme_clicked()
{
    insert_filme insertfilme;
    insertfilme.exec();
}


void tela_inicial::on_Button_pesq_filme_clicked()
{
    pesquisar_filmes pesquisarfilme;
    pesquisarfilme.exec();
}

