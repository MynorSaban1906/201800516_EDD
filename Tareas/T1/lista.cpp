#include "lista.h"
using namespace std;
Lista::Lista()
{
    this->cabeza=NULL;

}

void Lista::agregar(Nodo *nuevo){
    if(cabeza==NULL){
        this->cabeza=nuevo;
        this->cola=nuevo;

    }else{
        this->cola->setSiguiente(nuevo);
        this->cola=nuevo;

    }
}

void Lista::buscar(string nombre){
    bool dato=false; // para verificar si existe o no
    Nodo *aux=this->cabeza; //senalo para la cabeza de la lista
    while((aux!=NULL)){ // busco
        if(aux->nombre==nombre){ //codicionales
           cout<<"Nombre: "<<aux->nombre<<" Carnet :"<<aux->carne;
           dato=true;
        }
        aux=aux->siguiente;
    }
    if(dato==false){
        cout<<"Estudiante "<<nombre<<" No existe";
    }

}

void Lista::borrar(string estudiante){
    Nodo *anterior,*eliminar;
    eliminar=this->cabeza;
    anterior=NULL;

    if(eliminar!=NULL){
        while((eliminar!=NULL)&&(eliminar->nombre!=estudiante)){
            anterior=eliminar;
            eliminar=eliminar->siguiente;
        }
        if(anterior==NULL){
            cabeza=cabeza->siguiente;
            delete eliminar;
        }
        else if(eliminar==NULL){
            cout<<"No Existe"<<endl;
        }
        else{
            anterior->siguiente=eliminar->siguiente;
            delete eliminar;
            cout<<"Se elimino el estudiante "<<eliminar->carne<<endl;
        }
    }
    else{
        cout<<"Lista Vacia"<<endl;
    }
}

void Lista::imprimir(){
    Nodo *aux=this->cabeza;
    while(aux!=NULL){
        cout<<"Estudiante :  "<<aux->nombre<<" : "<<aux->carne<<endl;
        aux=aux->siguiente;
    }
}

Lista::~Lista(){
    Nodo *aux=this->cabeza;
    Nodo *temporal;
    while(aux!=NULL){
        temporal=aux->siguiente;
        delete aux;
        aux=temporal;
    }
}

