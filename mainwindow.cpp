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
        ui->textEdit_saida->setText(recursivo.par(ui->lineEdit_input->text().toInt()));
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
        ui->textEdit_saida->setText(recursivo.impar(ui->lineEdit_input->text().toInt()));
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
        ui->textEdit_saida->setText(QString::number(recursivo.somatorio(ui->lineEdit_input->text().toInt())));
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
        ui->textEdit_saida->setText(QString::number(recursivo.nPi()));
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
        ui->textEdit_saida->setText(QString::number(recursivo.Piaprox()));
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_iterativoImprimir_clicked()
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
        ui->textEdit_saida->setText(iterativo.imprimir(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_iterativoPar_clicked()
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
        ui->textEdit_saida->setText(iterativo.par(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_iterativoImpar_clicked()
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
        ui->textEdit_saida->setText(iterativo.impar(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_iterativoSomatorio_clicked()
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
        ui->textEdit_saida->setText(QString::number(iterativo.somatorio(ui->lineEdit_input->text().toInt())));
        ui->lineEdit_input->clear();
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_iterativoPi_clicked()
{
    try
    {
        ui->lineEdit_input->clear();
        ui->textEdit_saida->setText(QString::number(iterativo.nPi()));
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_iterativoPiaprox_clicked()
{
    try
    {
        ui->lineEdit_input->clear();
        ui->textEdit_saida->setText(QString::number(iterativo.Piaprox()));
    }
    catch ( QString &erro )
    {
        QMessageBox::critical(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButton_iterativoNcubos_clicked()
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
        ui->textEdit_saida->setText(QString::number(iterativo.nCubos(ui->lineEdit_input->text().toInt())));
        ui->lineEdit_input->clear();
    }
    catch(QString &erro)
    {
        QMessageBox::critical(this, "Erro", erro);
    }
}


void MainWindow::on_pushButton_iterativoNmnaturais_clicked()
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
        ui->textEdit_saida->setText(iterativo.nmNaturais(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro", erro);
    }
}


void MainWindow::on_pushButton_recursivoNcubos_clicked()
{
    try {
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
        ui->textEdit_saida->setText(QString::number(recursivo.nCubos(ui->lineEdit_input->text().toInt())));
        ui->lineEdit_input->clear();
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro", erro);
    }
}


void MainWindow::on_pushButton_recursivoNmnaturais_clicked()
{
    try {
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
        ui->textEdit_saida->setText(recursivo.nmNaturais(ui->lineEdit_input->text().toInt()));
        ui->lineEdit_input->clear();
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro", erro);
    }
}

