#ifndef PESQUISAR_FILMES_H
#define PESQUISAR_FILMES_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class pesquisar_filmes;
}

class pesquisar_filmes : public QDialog
{
    Q_OBJECT

public:
    explicit pesquisar_filmes(QWidget *parent = nullptr);
    ~pesquisar_filmes();

private slots:
    void on_Button_busca_clicked();

    void on_Button_emprestar_clicked();

private:
    Ui::pesquisar_filmes *ui;
};

class emprestimo{
private:
    QString username;
    QString senha;
public:
    emprestimo(QString new_user, QString new_senha):username(new_user), senha(new_senha){}
    void set_username(QString new_user){
        username = new_user;
    }
    QString get_username(){
        return username;
    }
    void set_senha(QString new_senha){
        senha = new_senha;
    }
    QString get_senha(){
        return senha;
    }
    int verifica_conta(){
        int cont = 0;
        QSqlQuery query;

        if(query.exec("SELECT * FROM info_login where nome='"+username+"' and senha='"+senha+"' and pontos>=10")){
            while(query.next()){
                cont++;
            }
        }
        return cont;
    }
    int emprestar_filme(int id){
        QSqlQuery query;
        int cont = 0;
        if(query.exec("SELECT * FROM iten_filmes where status = 'Disponivel' and id ="+QString::number(id))){
            while(query.next()){
                cont++;
            }
            if(cont == 1){
                query.prepare("UPDATE iten_filmes SET status = 'Indisponivel' WHERE id ="+QString::number(id));
                if(query.exec()){
                    cont++;
                    query.exec("UPDATE info_login SET pontos = pontos-10 WHERE nome = '"+username+"' AND senha = '"+senha+"'");
                }
            }
        }
        return cont;
    }
};

#endif // PESQUISAR_FILMES_H
