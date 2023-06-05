//Ejercicio 6 Fibonnacci
#include <iostream>

using namespace std;

void fibonacci(int primerTermino, int segundoTermino, int numSiguiente);

int main(int argc, char const *argv[])
{
    int num1 = 0, num2 = 1, numS = 0;
    fibonacci(num1, num2, numS);
    return 0;
}


void fibonacci(int primerTermino, int segundoTermino, int numSiguiente){
    primerTermino = 0;
    segundoTermino = 1; 
    numSiguiente = 0;

    cout << "Serie de Fibonacci hasta el numero 1000: " << endl;

    cout << primerTermino << endl;

    numSiguiente = primerTermino + segundoTermino;

    while (numSiguiente < 1000)
    {
        if (numSiguiente<0)
        {
            cout << "El numero es negativo. " << endl;
        }else
        {
            cout << numSiguiente << endl;

            primerTermino = segundoTermino;
            segundoTermino = numSiguiente;
            numSiguiente = primerTermino + segundoTermino;
        }
    }
}