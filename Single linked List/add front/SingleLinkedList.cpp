//  Created by Julian Esteban Nieto Diaz on.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

// Singly- Linked list 
/*  add front /back
    mostra el frente/back
    remover frente/ back

    busquedas y eliminaciones
    esta vacia?
    anadir antes o despues de unnodo
*/



#include <iostream>
#include <stdlib.h> 
#include "c++v knowledge.h"

using namespace std;




//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://



int main()
{
    ejecutar();
    return 0;
 
	
}
//::::::::::::::::::::::::::::::::::::::::Operaciones anadir::::::::::::::::::::::::::::::::::::::://
// anadir solo al frente igual a apilar LIFO ultimo en entrar primero en salir
void agregarAlFrente(Nodo *&front, int valor) { //  solo con header direccion y valor Node** head_ref, int new_data 
    Nodo* casilla = new Nodo(); // se crea la existencia de un nuevo nodo = como un opbjeto

    casilla->dato = valor;        // almacenar valor 
    casilla->siguiente = front;  // nodo siguiente o apuntador del nodo apunta a la nueva cabeza ... si esta vacio apunta a null new_node->next = (*head_ref) "rellenar el puntero"
    front = casilla;            // el header apunta al nuevo nodo anadido  (*head_ref) = new_node;  la variable front siempre señala el inicio pila = nuevo nodo

    // casilla representa el nuevo nodo o casilla que se esta almacenando valor .... casilla es el nuevo nodo
    
    elementoInicialMostrar(front);
    //cout << "valor " << valor << "se inserto " << endl ;
};

// mostrar elemnto inicial
void elementoInicialMostrar(Nodo*& frente) {
    cout << " El primer elemento de la PILA es: " << frente << endl;
}


//::::::::::::::::::::::::::::::::::::::::Metodo de ejecucion::::::::::::::::::::::::::::::::::::::://
void ejecutar() {
    Nodo* elemento = NULL;

    agregarALFrente(elemento, 5);
    agregarALFrente(elemento, 6);
    agregarALFrente(elemento, 7);

 }
