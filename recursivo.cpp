#include "recursivo.h"

namespace Pedro{

QString recursivo::getResultado() const
{
    return resultado;
}

recursivo::recursivo():
resultado("")
{
}

QString recursivo::imprimir(int n, int valor, QString resultado)
{
    if (valor <= n)
    {
        resultado += QString::number(valor) + " ";
        return imprimir(n, valor + 1, resultado);
    }
    return resultado;
}

void recursivo::clear()
{
    resultado = "";
}

void recursivo::par(int n, int valor)
{
    if (valor <= n)
    {
        if (valor % 2 == 0)
        {
            resultado += QString::number(valor) + " ";
        }
        return par(n, valor + 1);
    }
    return;
}
void recursivo::impar(int n, int valor)
{
    if (valor <= n)
    {
        if (valor % 2 != 0)
        {
            resultado += QString::number(valor) + " ";
        }
        return impar(n, valor + 1);
    }
    return;
}
void recursivo::somatorio(int n, int valor, int soma)
{
    if (valor <= n)
    {
        soma += valor;
        return somatorio(n, valor + 1, soma);
    }
    resultado = QString::number(soma);
    return;
}
void recursivo::nPi(double pi, double termo, int sinal)
{
    if (abs(termo) >= 0.0001) {
        pi += sinal * termo;
        sinal *= -1;
        termo *= 4.0 / (3.0 + 2.0 * floor(pi / 2.0));
        return nPi(pi + (sinal * termo), termo *  (4.0 / (3.0 + 2.0 * floor(pi / 2.0))), sinal * (-1));
    }
    resultado = QString::number(pi);
    return;
}

void recursivo::Piaprox(double pi, int sinal, int n)
{
    if (n <= 51) {
        double termo = sinal * 1.0 / std::pow(2*n-1, 3);
        return Piaprox(pi + termo, sinal * -1, n + 1);
    }
    
    pi *= 32;
    pi = std::pow(pi, 1.0/3);
    resultado = QString::number(pi);
    return;
}
}
