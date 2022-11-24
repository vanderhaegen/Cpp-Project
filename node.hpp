#pragma once
#include <iostream>

using namespace std;

class Nodo{
    double valor; // Valor a ser armazenado
    public:
        Nodo *esquerda; // Ponteiros que apontam para os elementos a esquerda
        Nodo *direita; // e direita do nodo
        Nodo(); // Construtor 1
        Nodo(double valor, Nodo *esq, Nodo *dir); // Construtor 2
        ~Nodo(); // Destrutor
        double GetValor(); // Retorna valor
        void SetValor(double val); // Seta novo valor de "valor"
        Nodo* nodoEsquerda(); // Retorna ponteiro que aponta para a esquerda
        Nodo* nodoDireita(); // e para a direita
        bool Vazio(); // Retorna verdadeiro se o nodo está vazio
};
