#include <iostream>

using namespace std;

int suma(int numCantidad);

int main(int argc, char const *argv[])
{
    int cantidad, sumatoria;
    
    cout << "Cuantos numeros quieres sumar? ";
    cin >> cantidad;

    sumatoria = suma(cantidad);
    
    cout << "La suma es igual a: " << sumatoria << endl;

    return 0;
}

int suma(int numCantidad){
    int temporal, suma;
    suma = 0;
    int numeros[100];

    for (int i = 0; i < numCantidad; i++)
    {
        cin >> numeros[i];
        temporal = numeros[i];
        suma = suma + temporal;

        if (numeros[i]==0){
            cout << "Arreglo vacío" << endl;
        }
    }
    return suma;
}

