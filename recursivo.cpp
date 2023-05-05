#include "recursivo.h"

namespace Pedro
{

Recursivo::Recursivo():
    resultado("")
{
}

void Recursivo::imprimirR(int n, int valor)
{
    if (valor >= n)
    {
        resultado += QString::number(valor);
        return imprimirR(n, valor+1);
    }
    else
    {
        return;
    }
}

}
