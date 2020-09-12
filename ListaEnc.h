#pragma once

#include <iostream>

using namespace std;

class Dados
{
public:
	int chave;
};
class Nodo
{
public:
	Dados d;
	Nodo *rabo;
};
class ListaEnc
{
public:
	Nodo* cabeca;

	ListaEnc() 
	{
		cabeca = NULL;
		cout << "### A lista foi inicializada com sucesso! ###\n" << endl;
		cout << ".---------------------------." << endl;
		cout << "| IMPRIMIR LISTA     (A)    |" << endl;
		cout << "| ADICIONAR ELEMENTO (B)    |" << endl;
		cout << "| REMOVER ELEMENTO   (C)    |" << endl;
		cout << "| BUSCAR ELEMENTO    (D)    |" << endl;
		cout << "| DESTRUIR LISTA     (E)    |" << endl;
		cout << ".---------------------------." << endl;
	}

	void imprimir();  //OK
	void adicionar(); //OK
	void remover();   //OK
	void buscar();    //Ok
	void destruir();  //OK
};

/*

*cabeca = ponteiro que dará início a lista
*aux = poonteiro auxiliar que pecorrerá a lista
*ant = ponteiro auxilar que apontará para o elemento anterior
*rabo = ponteiro que apontará para o próximo elemento
*novoElemento = elemento novo na lista
chaveNumero = elemento da lista

*/