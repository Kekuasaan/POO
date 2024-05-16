#include <iostream>
#include "complejos.h"

using namespace std;

int main()
{
    Complejos n1(13.49, 1);
    Complejos n2(11.11, 13.33);

    Complejos suma = n1.sumar(n2);
    Complejos resta = n1.restar(n2);
    Complejos multiplicacion = n1.multiplicar(n2);
    Complejos division = n1.dividir(n2);
    cout << "Suma: ";
    suma.mostrar_datos();
    cout << "Resta: ";
    resta.mostrar_datos();
    cout << "Multiplicacion: ";
    multiplicacion.mostrar_datos();
    cout << "Division: ";
    division.mostrar_datos();

    return 0;
}
