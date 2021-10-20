// data structures.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h> 
#include "SingleLinkedList.h"

using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    ejecutar();
}


void agregarAlFrente(Nodo*& front, int valor) { 
    Nodo* casilla = new Nodo(); 
    casilla->dato = valor;        
    casilla->siguiente = front;  
    front = casilla;            

    
    // cout << "valor " << valor << " se inserto " << endl ;
    
}

void agregarAtras( Nodo* apuntadorAuxiliar, int valor) {
    // hay que recorrer todos los nodos  hasta llegar al ultimo...
    
    while (apuntadorAuxiliar != NULL){
        apuntadorAuxiliar->dato;
        apuntadorAuxiliar = apuntadorAuxiliar->siguiente;
    }
    // cout << "ultimo valor envalor en la cola = " << apuntadorAuxiliar; // direccion &apuntadorAuxiliar al final apuntara a este punto 

    Nodo* nuevacasilla = new Nodo();  // creo el nodo que deseo agregar
    nuevacasilla->dato = valor;
    nuevacasilla->siguiente = apuntadorAuxiliar; // la nueva casilla en direccion se va a dirigir al ultima direccion ... si apuntaba a null estaba vacia la linked list


}

void mostrar(Nodo* n){
    
    if (n == NULL) {
        cout << "NULL";
    }
    
    while (n != NULL) {
        cout << n->dato << " -> ";
        n = n->siguiente;
    }
}


//::::::::::::::::::::::::::::::::::::::::Metodo de ejecucion::::::::::::::::::::::::::::::::::::::://
void ejecutar() {
    Nodo* elemento = NULL;
    

    agregarAlFrente(elemento, 5);
    agregarAlFrente(elemento, 6);
    agregarAlFrente(elemento, 7);

    mostrar(elemento);
    agregarAtras(elemento,8);


    
}