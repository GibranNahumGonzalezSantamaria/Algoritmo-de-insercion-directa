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
        int Temporal = Arreglo[i];
        int j = i - 1;

        while (j >= 0 && Arreglo[j] > Temporal)
        {
            Arreglo[j + 1] = Arreglo[j];
            j = j - 1;
        }
        Arreglo[j + 1] = Temporal;

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
