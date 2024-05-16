#ifndef COMPLEJOS_H
#define COMPLEJOS_H


class Complejos
{
private:
    double real, imaginario;
public:
    Complejos(double real, double imaginario);
    Complejos sumar(Complejos &n1);
    Complejos restar(Complejos &n1);
    Complejos multiplicar(Complejos &n1);
    Complejos dividir(Complejos &n1);
    void mostrar_datos();

};

#endif // COMPLEJOS_H
