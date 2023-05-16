#include "recursivo.h"

namespace Pedro{

recursivo::recursivo()
{
}

QString recursivo::imprimir(int n, int valor, QString resultado)
{
    if (valor <= n)
    {
        resultado += QString::number(valor) + ", ";
        return imprimir(n, valor + 1, resultado);
    }
    return resultado;
}

QString recursivo::par(int n, int valor, QString resultado)
{
    if (valor <= n)
    {
        if (valor % 2 == 0)
        {
            resultado += QString::number(valor) + ", ";
        }
        return par(n, valor + 1, resultado);
    }
    return resultado;
}
QString recursivo::impar(int n, int valor, QString resultado)
{
    if (valor <= n)
    {
        if (valor % 2 != 0)
        {
            resultado += QString::number(valor) + ", ";
        }
        return impar(n, valor + 1, resultado);
    }
    return resultado;
}
int recursivo::somatorio(int n, int valor, int soma)
{
    if (valor <= n)
    {
        soma += valor;
        return somatorio(n, valor + 1, soma);
    }
    return soma;
}
double recursivo::nPi(int impar, int sinal)
{
    if (4.0/impar > 0.0001) {
        return (4.0/impar)*sinal+nPi(impar+2,sinal*(-1));
    }
    else
    {
        return 0;
    }
}

double recursivo::Piaprox(double pi, int sinal, int n)
{
    if (n <= 51) {
        double termo = sinal * 1.0 / std::pow(2*n-1, 3);
        return Piaprox(pi + termo, sinal * -1, n + 1);
    }
    
    pi *= 32;
    pi = std::pow(pi, 1.0/3);
    return pi;
}

}
