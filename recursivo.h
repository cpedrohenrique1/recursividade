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
    double nPi(double pi = 4.0, double termo = 4.0/3.0, int sinal = -1);
    double Piaprox(double pi = 0, int sinal = 1, int n = 1);
    int nCubos(int n, int i = 1, int valor = 0);
    QString nmNaturais(int n, QString resultado = "");
};

}

#endif // RECURSIVO_H
