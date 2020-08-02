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

void Lista::buscar(long nombre){
    bool dato=false; // para verificar si existe o no
    Nodo *aux=this->cabeza; //senalo para la cabeza de la lista
    while((aux!=NULL)){ // busco
        if(aux->carne==nombre){ //busca el carnet del estudiante buscado
           cout<<"Nombre: "<<aux->nombre<<" Carnet :"<<aux->carne<<endl;
           dato=true;
        }
        aux=aux->siguiente; // si no lo encuentra avanza al otro nodo para buscar
    }
    if(dato==false){
        cout<<"Estudiante "<<nombre<<" No existe"<<endl;
    }

}

void Lista::borrar(long estudiante){
    Nodo *anterior,*eliminar;  //los nodos auxiliares
    eliminar=this->cabeza; //igualo el nodo a la cabeza de la lista
    anterior=NULL;

    if(eliminar!=NULL){//si la lista no esta vacia
        while((eliminar!=NULL)&&(eliminar->carne!=estudiante)){ //recorre la lista
            anterior=eliminar; //nodo anterior es igual al eliminar
            eliminar=eliminar->siguiente;//nodo eliminar es igual al siguiente
        }
        if(anterior==NULL){ //si solo existe un dato loelimina
            cabeza=cabeza->siguiente;
            delete eliminar;
        }
        else if(eliminar==NULL){ //si no existe eldato en la lista
            cout<<"No Existe"<<endl;
        }
        else{ //si encuentra el dato a eliminar
            //el anterior es igual al siguiente pero tambien es igual al que va 1 adelantado pero apunta al 3
            //  1 -> 2 -> 3
            //anterior=1   eliminar=2
            //anterior siguiente es igual que el 1 señale al 3 de una vez   1 -> 3
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
    while(aux!=NULL){  //recorro la lista
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

