#ifndef RECURSIVO_H
#define RECURSIVO_H

#include <QString>

namespace Pedro{

class recursivo
{
public:
    recursivo();
    QString imprimir(int n, int valor = 1, QString resultado = "");
    QString par(int n, int valor = 1, QString resultado = "");
    QString impar(int n, int valor = 1, QString resultado = "");
    int somatorio(int n, int valor = 1, int soma = 0);
    double nPi(int impar = 1, int sinal = 1);
    double Piaprox(double pi = 0, int sinal = 1, int n = 1);
};

}

#endif // RECURSIVO_H
