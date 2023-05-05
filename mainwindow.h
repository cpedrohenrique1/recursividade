#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <interativo.h>
#include <recursivo.h>


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
    void on_pushButton_imprimirInterativo_clicked();

private:
    Ui::MainWindow *ui;
    Pedro::Interativo interativo;
    Pedro::Recursivo recursivo;
};
#endif // MAINWINDOW_H
