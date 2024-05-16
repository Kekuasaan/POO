#include "complejos.h"
#include "iostream"

using namespace std;

Complejos::Complejos(double real, double imaginario)
{
    this->real = real;
    this->imaginario = imaginario;
}

Complejos Complejos::sumar(Complejos &n1)
{
    double nuevoReal = real + n1.real;
    double nuevoImaginario = imaginario + n1.imaginario;

    return Complejos(nuevoReal, nuevoImaginario);
}

Complejos Complejos::restar(Complejos &n1)
{
    double nuevoReal = real - n1.real;
    double nuevoImaginario = imaginario - n1.imaginario;

    return Complejos(nuevoReal, nuevoImaginario);
}

Complejos Complejos::multiplicar(Complejos &n1)
{
    double nuevoReal = real * n1.real;
    double nuevoImaginario = imaginario * n1.imaginario;

    return Complejos(nuevoReal, nuevoImaginario);
}

Complejos Complejos::dividir(Complejos &n1)
{
    double nuevoReal = real / n1.real;
    double nuevoImaginario = imaginario / n1.imaginario;

    return Complejos(nuevoReal, nuevoImaginario);
}
void Complejos::mostrar_datos()
{
    cout << endl << real;

    if(imaginario >= 0)
        cout << " + " << imaginario << "i " << endl;
    else
        cout << " - " << imaginario << "i " << endl;
}
