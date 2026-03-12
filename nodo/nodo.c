#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo* NewNode = (Nodo*)malloc(sizeof(nodo));
    if(NewNode!=NULL){
        NewNode->dato = dato;
        NewNode->siguiente = siguiente;
    }
    return NewNode;
}
void nodo_destruir(Nodo* nodo)
{
    if(nodo!=NULL){
        free(nodo);        
    }
}
