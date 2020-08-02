#ifndef LISTA_H
#define LISTA_H
#include <nodo.h>
#include <iostream>
class Lista
{
public:
    Lista();
    ~Lista();
    void agregar(Nodo *nuevo);
    Nodo* get(int i);
    void imprimir();
    void buscar(string nombre);
    void borrar(string nombre);
private:
    Nodo *cabeza,*cola;

};

#endif // LISTA_H
