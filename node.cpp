#pragma once
#include <iostream>
#include "node.hpp"

using namespace std;

// Construtor 1
Nodo::Nodo (){
	esquerda = direita = 0;
}
// Construtor 2
Nodo::Nodo(double valor, Nodo *esq, Nodo *dir){
	valor = val;
	esquerda = esq;
	direita = dir;
}
// Retorna valor do nodo
double Nodo::GetValor (){
	return valor;
}
// Altera valor
void Nodo::setValor (double novoDado){
	dado = novoDado;
}
// Ponteiro da esquerda
Nodo* Nodo::nodoEsquerda(){
	return esquerda;
}
// Ponteiro da direita
Nodo* Nodo::nodoDireita (){
	return direita;
}
// Verifica se o nodo está vazio
bool Nodo::Vazio (){
	return (esquerda == 0) && (direita == 0);
}
