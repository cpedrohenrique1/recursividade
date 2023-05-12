#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iterativo.h>
#include <recursivo.h>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_recursivoImprimir_clicked();

    void on_pushButton_recursivoPar_clicked();

    void on_pushButton_recursivoImpar_clicked();

    void on_pushButton_recursivoSomatorio_clicked();

    void on_pushButton_recursivoPi_clicked();

    void on_pushButton_recursivoPiaprox_clicked();

    void on_pushButton_iterativoImprimir_clicked();

    void on_pushButton_iterativoPar_clicked();

    void on_pushButton_iterativoImpar_clicked();

    void on_pushButton_iterativoSomatorio_clicked();

    void on_pushButton_iterativoPi_clicked();

    void on_pushButton_iterativoPiaprox_clicked();

    void on_pushButton_iterativoNcubos_clicked();

    void on_pushButton_iterativoNmnaturais_clicked();

    void on_pushButton_recursivoNcubos_clicked();

    void on_pushButton_recursivoNmnaturais_clicked();

private:
    Ui::MainWindow *ui;
    Pedro::iterativo iterativo;
    Pedro::recursivo recursivo;
};
#endif // MAINWINDOW_H
