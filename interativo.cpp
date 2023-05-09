#include "interativo.h"

namespace Pedro{

interativo::interativo()
{

}

QString Pedro::interativo::imprimir(int n)
{
    QString saida = "";
    for (int i = 1; i <= n; i++)
    {
        saida += QString::number(i) + " ";
    }
    return saida;
}

QString Pedro::interativo::par(int n)
{
    QString saida = "";
    for (int i = 2; i <= n; i+=2)
    {
        saida += QString::number(i) + " ";
    }
    return saida;
}

QString Pedro::interativo::impar(int n)
{
    QString saida = "";
    for (int i = 1; i <= n; i+=2)
    {
        saida += QString::number(i) + " ";
    }
    return saida;
}

QString Pedro::interativo::somatorio(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    return QString::number(soma);
}

QString Pedro::interativo::nPi()
{
    double pi = 4.0;
    double termo = 4.0 / 3.0;
    int sinal = -1;
    
    while (abs(termo) >= 0.0001) {
        pi += sinal * termo;
        sinal *= -1;
        termo *= 4.0 / (3.0 + 2.0 * floor(pi / 2.0));
    }
    return QString::number(pi);
}

QString Pedro::interativo::Piaprox()
{
    double pi = 0;
    int sinal = 1;
    
    for (int i = 1; i <= 51; i++) {
        double termo = sinal * 1.0 / std::pow(2*i-1, 3);
        pi += termo;
        sinal *= -1;
    }
    
    pi *= 32;
    pi = std::pow(pi, 1.0/3);
    
    return QString::number(pi);
}

}
