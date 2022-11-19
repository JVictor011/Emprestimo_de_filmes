#include "pesquisar_filmes.h"
#include "ui_pesquisar_filmes.h"
#include <QMessageBox>

pesquisar_filmes::pesquisar_filmes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pesquisar_filmes)
{
    ui->setupUi(this);
    QSqlQuery query;
        query.prepare("select * from iten_filmes");
        if(query.exec()){
            int aux {0};
            ui->lista_de_itens->setColumnCount(7);
            while(query.next()){
                ui->lista_de_itens->insertRow(aux);
                ui->lista_de_itens->setItem(aux,0,new QTableWidgetItem(query.value(0).toString()));
                ui->lista_de_itens->setItem(aux,1,new QTableWidgetItem(query.value(1).toString()));
                ui->lista_de_itens->setItem(aux,2,new QTableWidgetItem(query.value(2).toString()));
                ui->lista_de_itens->setItem(aux,3,new QTableWidgetItem(query.value(3).toString()));
                ui->lista_de_itens->setItem(aux,4,new QTableWidgetItem(query.value(4).toString()));
                ui->lista_de_itens->setItem(aux,5,new QTableWidgetItem(query.value(5).toString()));
                ui->lista_de_itens->setItem(aux,6,new QTableWidgetItem(query.value(6).toString()));
                ui->lista_de_itens->setRowHeight(aux, 20);
                aux++;
            }
            ui->lista_de_itens->setColumnWidth(0,30);
            ui->lista_de_itens->setColumnWidth(1,160);
            ui->lista_de_itens->setColumnWidth(2,100);
            ui->lista_de_itens->setColumnWidth(4,100);
            ui->lista_de_itens->setColumnWidth(5,40);
            ui->lista_de_itens->setColumnWidth(6,90);
            QStringList cabecalhos = {"ID", "Nome", "Diretor", "Genero", "Estudio", "Valor", "Status"};
            ui->lista_de_itens->setHorizontalHeaderLabels(cabecalhos);
            ui->lista_de_itens->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->lista_de_itens->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->lista_de_itens->verticalHeader()->setVisible(false);
        }else{
            ui->label->setText("ERRO AO PESQUISAR!");
        }
}

pesquisar_filmes::~pesquisar_filmes()
{
    delete ui;
}

void pesquisar_filmes::on_Button_busca_clicked()
{
    QString pesquisa = ui->line_pesquisa->text();
    ui->lista_de_itens->clear();
    QSqlQuery query;
        query.prepare("select * from iten_filmes WHERE nome='"+pesquisa+"' or diretor = '"+pesquisa+"' or genero = '"+pesquisa+"'");
        if(query.exec()){
            int aux {0};
            ui->lista_de_itens->setColumnCount(7);
            while(query.next()){
                ui->lista_de_itens->insertRow(aux);
                ui->lista_de_itens->setItem(aux,0,new QTableWidgetItem(query.value(0).toString()));
                ui->lista_de_itens->setItem(aux,1,new QTableWidgetItem(query.value(1).toString()));
                ui->lista_de_itens->setItem(aux,2,new QTableWidgetItem(query.value(2).toString()));
                ui->lista_de_itens->setItem(aux,3,new QTableWidgetItem(query.value(3).toString()));
                ui->lista_de_itens->setItem(aux,4,new QTableWidgetItem(query.value(4).toString()));
                ui->lista_de_itens->setItem(aux,5,new QTableWidgetItem(query.value(5).toString()));
                ui->lista_de_itens->setItem(aux,6,new QTableWidgetItem(query.value(6).toString()));
                ui->lista_de_itens->setRowHeight(aux, 20);
                aux++;
            }
            ui->lista_de_itens->setColumnWidth(0,30);
            ui->lista_de_itens->setColumnWidth(1,160);
            ui->lista_de_itens->setColumnWidth(2,100);
            ui->lista_de_itens->setColumnWidth(4,100);
            ui->lista_de_itens->setColumnWidth(5,40);
            ui->lista_de_itens->setColumnWidth(6,90);
            QStringList cabecalhos = {"ID", "Nome", "Diretor", "Genero", "Estudio", "Valor", "Status"};
            ui->lista_de_itens->setHorizontalHeaderLabels(cabecalhos);
            ui->lista_de_itens->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->lista_de_itens->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->lista_de_itens->verticalHeader()->setVisible(false);
        }else{
            ui->label->setText("ERRO AO PESQUISAR!");
        }
}


void pesquisar_filmes::on_Button_emprestar_clicked()
{
    QString username = ui->line_username->text();
    QString senha = ui->line_senha->text();
    QSqlQuery query;

    if(query.exec("SELECT * FROM info_login where nome='"+username+"' and senha='"+senha+"' and pontos>=10")){
        int contador = 0;
        while(query.next()){
            contador++;
        }

        if(contador > 0){
            int linha = ui->lista_de_itens->currentRow();
            int id = ui->lista_de_itens->item(linha,0)->text().toInt();
            query.prepare("UPDATE iten_filmes SET status = 'Indisponivel' WHERE id ="+QString::number(id));
            if(query.exec()){
                query.exec("UPDATE info_login SET pontos = pontos-10 WHERE nome = '"+username+"' AND senha = '"+senha+"'");
                QMessageBox::warning(this,"SUCESSO", "O Filme foi emprestado!");
            }
        }
    }
}

