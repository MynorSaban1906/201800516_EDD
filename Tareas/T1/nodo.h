#ifndef NODO_H
#define NODO_H
#include <string.h>
#include <iostream>
#include <stddef.h>

using namespace std;
class Nodo
{
public:
    Nodo(string nombre,long carne);
    ~Nodo();
    void setSiguiente(Nodo *sig);
    void imprimir();

    string nombre;
    long carne;
    Nodo *siguiente;
};
#endif // NODO_H
