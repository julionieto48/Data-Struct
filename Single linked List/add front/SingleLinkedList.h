

#pragma once

#include <iostream>

struct Nodo {
    int dato; // va a ser un valor
    Nodo* siguiente;
};


void agregarALFrente(Nodo*& front, int valor);
void elementoInicialMostrar(Nodo*& frente);
void ejecutar();  // donde se opera en la lista 
