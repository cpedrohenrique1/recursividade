#include <iostream>

void imprimirI(int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout << i;
    }
}

void imprimirR(int n, int valor = 1)
{
    if (n >= valor)
    {
        std::cout << valor;
        return (imprimirR(n, valor+1));
    }
    else
    {
        return;
    }
}

void parI(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i;
        }
    }
}

void parR(int n, int valor = 1)
{
    if (valor <= n)
    {
        if (valor % 2 == 0)
        {
            std::cout << valor;
        }
        return parR(n, valor+1);
    }
    else
    {
        return;
    }
}

int main()
{
    
    return 0;
}
