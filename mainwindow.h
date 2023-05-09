#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <interativo.h>
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
    void on_pushButton_interativoImprimir_clicked();

    void on_pushButton_interativoPar_clicked();

    void on_pushButton_interativoImpar_clicked();

    void on_pushButton_interativoSomatorio_clicked();

    void on_pushButton_interativoPi_clicked();

    void on_pushButton_interativoPiaprox_clicked();

    void on_pushButton_recursivoImprimir_clicked();

    void on_pushButton_recursivoPar_clicked();

    void on_pushButton_recursivoImpar_clicked();

    void on_pushButton_recursivoSomatorio_clicked();

    void on_pushButton_recursivoPi_clicked();

    void on_pushButton_recursivoPiaprox_clicked();

private:
    Ui::MainWindow *ui;
    Pedro::interativo interativo;
    Pedro::recursivo recursivo;
};
#endif // MAINWINDOW_H
