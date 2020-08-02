#include "nodo.h"
#include <iostream>
Nodo::Nodo(string nombre,long carne)
{
    this->carne=carne;
    this->nombre=nombre;
    this->siguiente=NULL;
}



void Nodo::setSiguiente(Nodo *sig){
    this->siguiente=sig;
}


void Nodo::imprimir(){
    cout<<"Nombre: "<<this->nombre<<" Edad: "<<this->carne<<endl;
}

Nodo::~Nodo(){
    cout<<"Estudiante eliminado"<<endl;
}
