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
    double pi = 4.0;
    double termo = 4.0 / 3.0;
    int sinal = -1;
    
    while (abs(termo) >= 0.0001) {
        pi += sinal * termo;
        sinal *= -1;
        termo *= 4.0 / (3.0 + 2.0 * floor(pi / 2.0));
    }
    return pi;
}

double Pedro::iterativo::Piaprox()
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
    
    return pi;
}

int iterativo::nCubos(int n)
{
    int valor = 0;
    for (int i = 1; i <= n; i++)
    {
        valor += pow(i, 3);
    }
    return valor;
}
QString iterativo::nmNaturais(int n)
{
    QString resultado = "";
    for (int i = n; i >= 0; i--)
    {
        resultado += QString::number(i) + ", ";
    }
    return resultado;
}
int iterativo::menorElemento(int n)
{
    return 2;
    
}
}
