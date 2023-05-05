#ifndef RECURSIVO_H
#define RECURSIVO_H
#include <QString>

namespace Pedro{

class Recursivo
{
private:
    QString resultado;
public:
    Recursivo();
    void imprimirR(int n, int valor);
    QString parR(int n, int valor);
    QString imparR(int n, int valor);
    QString somatorioR(int n, int valor);
    QString nPiR();
    QString naPiR();
};

}

#endif // RECURSIVO_H
