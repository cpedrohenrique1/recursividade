#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_interativoImprimir_clicked()
{
    try{
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        ui->textEdit_saida->setText(interativo.imprimir(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_interativoPar_clicked()
{
    try{
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        ui->textEdit_saida->setText(interativo.par(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_interativoImpar_clicked()
{
    try
    {
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        ui->textEdit_saida->setText(interativo.impar(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_interativoSomatorio_clicked()
{
    try
    {
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        ui->textEdit_saida->setText(interativo.somatorio(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_interativoPi_clicked()
{
    try
    {
        ui->lineEdit_input->clear();
        ui->textEdit_saida->setText(interativo.nPi());
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_interativoPiaprox_clicked()
{
    try
    {
        ui->lineEdit_input->clear();
        ui->textEdit_saida->setText(interativo.Piaprox());
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_recursivoImprimir_clicked()
{
    try
    {
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        ui->textEdit_saida->setText(recursivo.imprimir(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_recursivoPar_clicked()
{
    try
    {
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        recursivo.par(ui->lineEdit_input->text().toInt());
        ui->textEdit_saida->setText(recursivo.getResultado());
        recursivo.clear();
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_recursivoImpar_clicked()
{
    try
    {
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        recursivo.impar(ui->lineEdit_input->text().toInt());
        ui->textEdit_saida->setText(recursivo.getResultado());
        recursivo.clear();
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_recursivoSomatorio_clicked()
{
    try
    {
        QString teste = ui->lineEdit_input->text();
        for (int i = 0; i < teste.size(); i++)
        {
            if (teste[i] < '0' || teste[i] > '9')
            {
                throw QString("Valor invalido");
            }
        }
        if (ui->lineEdit_input->text().isEmpty())
        {
            throw QString("Valor esta vazio");
        }
        recursivo.somatorio(ui->lineEdit_input->text().toInt());
        ui->textEdit_saida->setText(recursivo.getResultado());
        recursivo.clear();
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_recursivoPi_clicked()
{
    try
    {
        ui->lineEdit_input->clear();
        recursivo.nPi();
        ui->textEdit_saida->setText(recursivo.getResultado());
        recursivo.clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_recursivoPiaprox_clicked()
{
    try
    {
        ui->lineEdit_input->clear();
        recursivo.Piaprox();
        ui->textEdit_saida->setText(recursivo.getResultado());
        recursivo.clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}

