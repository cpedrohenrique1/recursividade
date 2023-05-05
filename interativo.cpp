#include "interativo.h"

namespace Pedro{

QString Interativo::imprimirI(int n)
{
    QString resultado = "";
    for (int i = 1; i <= n; i++ )
    {
        resultado += QString::number(i) + " ";
    }
    return resultado;
}

QString Interativo::parI(int n)
{
    QString resultado = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            resultado += QString::number(i) + " ";
        }
    }
    return resultado;
}

QString Interativo::imparI(int n)
{
    QString resultado = "";
    for (int i = 1; i<=n; i++)
    {
        if (!(i % 2 == 0))
        {
            resultado += QString::number(i) + " ";
        }
    }
    return resultado;
}

QString Interativo::somatorioI(int n)
{
    QString resultado;
    int valor = 0;
    for (int i = 1; i <= n; i++)
    {
        valor += i;
    }
    resultado = QString::number(valor);
    return resultado;
}



}
