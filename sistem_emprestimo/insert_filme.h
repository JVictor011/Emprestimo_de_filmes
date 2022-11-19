#ifndef INSERT_FILME_H
#define INSERT_FILME_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class insert_filme;
}

class insert_filme : public QDialog
{
    Q_OBJECT

public:
    explicit insert_filme(QWidget *parent = nullptr);
    ~insert_filme();

private slots:
    void on_Button_add_clicked();

private:
    Ui::insert_filme *ui;
};

class itens{
private:
    QString nome;
    QString status = "Disponivel";
    int valor = 10;
public:
    itens(QString new_nome, QString new_status, int new_valor):nome(new_nome), status(new_status), valor(new_valor){}
    void set_nome(QString new_nome){
        nome = new_nome;
    }
    QString get_nome(){
        return nome;
    }
    void set_status(QString new_status){
        status = new_status;
    }
    QString get_status(){
        return status;
    }
    void set_valor(int new_valor){
        valor = new_valor;
    }
    int get_valor(){
        return valor;
    }
};

class filmes: public itens{
private:
    QString diretor;
    QString genero;
    QString estudio;
public:
    filmes(QString new_diretor, QString new_genero, QString new_estudio,
           QString new_nome, QString new_status, int new_valor):itens(new_nome, new_status, new_valor){
        diretor = new_diretor;
        genero = new_genero;
        estudio = new_estudio;
    }
    void set_diretor(QString new_diretor){
        diretor = new_diretor;
    }
    QString get_diretor(){
        return diretor;
    }
    void set_genero(QString new_genero){
        genero = new_genero;
    }
    QString get_genero(){
        return genero;
    }
    void set_estudio(QString new_estudio){
        estudio = new_estudio;
    }
    QString get_estudio(){
        return estudio;
    }
};

#endif // INSERT_FILME_H
