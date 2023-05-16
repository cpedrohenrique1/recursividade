#include "iterativo.h"

namespace Pedro{

iterativo::iterativo()
{

}

QString Pedro::iterativo::imprimir(int n)
{
    QString saida = "";
    for (int i = 1; i <= n; i++)
    {
        saida += QString::number(i) + ", ";
    }
    return saida;
}

QString Pedro::iterativo::par(int n)
{
    QString saida = "";
    for (int i = 2; i <= n; i+=2)
    {
        saida += QString::number(i) + ", ";
    }
    return saida;
}

QString Pedro::iterativo::impar(int n)
{
    QString saida = "";
    for (int i = 1; i <= n; i+=2)
    {
        saida += QString::number(i) + ", ";
    }
    return saida;
}

int Pedro::iterativo::somatorio(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    return soma;
}

double Pedro::iterativo::nPi()
{
    double pi = 0;
    int impar = 1;
    int sinal = 1;
    
    while (4.0/impar > 0.0001) {
        pi += sinal*(4.0/impar);
        impar += 2;
        sinal *= -1;
    }
    return pi;
}

double Pedro::iterativo::Piaprox()
{
    double pi = 0;
    int sinal = 1;
    
    for (int i = 1; i <= 102; i+=2) {
        double termo = sinal * 1.0 / std::pow(i, 3);
        pi += termo;
        sinal *= -1;
    }
    
    pi *= 32;
    pi = std::pow(pi, 1.0/3.0);
    
    return pi;
}

}
