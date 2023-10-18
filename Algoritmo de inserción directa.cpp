#include <iostream>
#define Tamano 8

using namespace std;

void InsercionDirecta();
void ImprimirArreglo();

int Arreglo[] = {10, 15, 21, 4, 16, 75, 94, 8};

int main()
{
    cout << "<<< Algoritmo de insercion directa >>>\n\n";

    InsercionDirecta();

    return 0;
}

void InsercionDirecta()
{
    for (int i = 0; i < Tamano; i++)
    {
        int Actual = Arreglo[i];
        int Anterior = i - 1;

        while (Anterior >= 0 && (Arreglo[Anterior] > Actual))
        {
            Arreglo[Anterior + 1] = Arreglo[Anterior];
            Anterior--;
        }
        Arreglo[Anterior + 1] = Actual;

        ImprimirArreglo();
    }
}

void ImprimirArreglo()
{
    for (int i = 0; i < Tamano; i++)
    {
        cout << "   " << Arreglo[i];

        // Al llegar al último elemento coloca . en lugar de ,
        if (i < Tamano - 1)
            cout << ',';
        else
            cout << '.';
    }
    cout << endl;
}
