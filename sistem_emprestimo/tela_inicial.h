#ifndef TELA_INICIAL_H
#define TELA_INICIAL_H

#include <QDialog>
#include "insert_filme.h"
#include "pesquisar_filmes.h"

namespace Ui {
class tela_inicial;
}

class tela_inicial : public QDialog
{
    Q_OBJECT

public:
    explicit tela_inicial(QWidget *parent = nullptr);
    ~tela_inicial();

private slots:
    void on_Button_add_filme_clicked();

    void on_Button_pesq_filme_clicked();

private:
    Ui::tela_inicial *ui;
};

#endif // TELA_INICIAL_H
