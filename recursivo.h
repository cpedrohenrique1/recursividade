#ifndef RECURSIVO_H
#define RECURSIVO_H

#include <QString>

namespace Pedro{

class recursivo
{
private:
    QString resultado;
public:
    recursivo();
    QString getResultado() const;
    double getPi() const;
    void clear();
    QString imprimir(int n, int valor = 1, QString resultado = "");
    void par(int n, int valor = 1);
    void impar(int n, int valor = 1);
    void somatorio(int n, int valor = 1, int soma = 0);
    void nPi(double pi = 4.0, double termo = 4.0/3.0, int sinal = -1);
    void Piaprox(double pi = 0, int sinal = 1, int n = 1);
};

}

#endif // RECURSIVO_H
