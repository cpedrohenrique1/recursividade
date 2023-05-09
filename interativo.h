#ifndef INTERATIVO_H
#define INTERATIVO_H

#include <QString>
#include <cmath>

namespace Pedro{

class interativo
{
public:
    interativo();
    QString imprimir(int n);
    QString par(int n);
    QString impar(int n);
    QString somatorio(int n);
    QString nPi();
    QString Piaprox();
};

}

#endif // INTERATIVO_H
