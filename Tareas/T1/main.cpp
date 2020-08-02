#include <iostream>
#include <lista.h>
#include <nodo.h>
using namespace std;

int main()
{
    Lista *listaE=new Lista(); // Declaro la lista en objeto
    Nodo *e1,*e2,*e3,*e4,*e5;//nodos donde se enviaran los datos
    e1=new Nodo("Mynor Saban",201800516);
    e2=new Nodo("Mario Lopez",201905164);
    e3=new Nodo("Antonio Marinez",20175421);
    e4=new Nodo("Darwin Palma",2000905135);
    e5=new Nodo("Samuel Leiva",20135421);
    //se agregan los datos que se envuentran en los nodos
    cout<<"Los datos Ingresados "<<endl;
    listaE->agregar(e1);
    listaE->agregar(e4);
    listaE->agregar(e5);
    listaE->agregar(e2);
    listaE->agregar(e3);
    cout<<"\nLos datos se Imprimen "<<endl;
    listaE->imprimir();
    cout<<"\nSe busca al Estudiante"<<endl;
    listaE->buscar(20135421);
    cout<<"\nSe borra al Estudiante"<<endl;
    listaE->borrar(201905164);
    cout<<"\nLos datos se imprimen nuevamente"<<endl;
    listaE->imprimir();
    return 0;
}
