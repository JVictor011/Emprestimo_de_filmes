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

#endif // PESQUISAR_FILMES_H
