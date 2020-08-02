#include <iostream>
#include <lista.h>
#include <nodo.h>
using namespace std;

int main()
{
    Lista *l=new Lista();
    Nodo *a,*b,*c;
    a=new Nodo("Marvin",201905124);
    b=new Nodo("Juan",10);
    c=new Nodo("Martha",23);
    l->agregar(a);
    l->agregar(b);
    l->agregar(c);
    l->imprimir();
    l->buscar("Juan");
    l->borrar("Marvin");
    l->imprimir();
    return 0;
}
