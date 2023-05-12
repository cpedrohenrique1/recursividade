#ifndef ITERATIVO_H
#define ITERATIVO_H

#include <QString>
#include <cmath>

namespace Pedro{

class iterativo
{
public:
    iterativo();
    QString imprimir(int n);
    QString par(int n);
    QString impar(int n);
    int somatorio(int n);
    double nPi();
    double Piaprox();
    int nCubos(int n);
    QString nmNaturais(int n);
    int menorElemento(int n);
};

}

#endif // ITERATIVO_H
