#pragma once
#include <iostream>


struct Nodo {
    int dato; // va a ser un valor
    Nodo* siguiente;
};

void agregarAlFrente(Nodo*& front, int valor);
void agregarAtras(Nodo*& front, int valor); // no tail pointer
void ejecutar();
void mostrar(Nodo* n);
