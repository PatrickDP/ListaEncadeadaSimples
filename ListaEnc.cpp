#include "ListaEnc.h"

using namespace std;

void ListaEnc::imprimir()
{
	Nodo* aux;

	if (cabeca == NULL)
	{
		cout << "Lista vazia!" << endl;
	}
	else
	{
		aux = cabeca;
		cout << "\n(CABECA)-> ";
		do
		{
			cout << "[" << aux->d.chave << "] -> ";
			aux = aux->rabo;
		} while (aux != NULL);
		cout << "[NULL]" << endl;
	}
}

void ListaEnc::adicionar()
{
	Nodo* novoElemento = NULL;
	Nodo* anterior = NULL;
	Nodo* aux;
	int chaveNumero;

	do
	{
		aux = cabeca;
		cin >> chaveNumero;
		if (chaveNumero == -1)
			break;
		novoElemento = (Nodo*)malloc(sizeof(Nodo));
		if (novoElemento == NULL) /*Falta memória*/
			return;
		novoElemento->d.chave = chaveNumero;
		while ((aux != NULL) && (aux->d.chave < novoElemento->d.chave)) //Procura a posição adequada
		{
			anterior = aux;
			aux = aux->rabo;
		}
		if (anterior == NULL) //Insere na primeira posição
		{
			novoElemento->rabo = cabeca;
			cabeca = novoElemento;
		} 
		else //Insere no meio ou final da lista
		{
			novoElemento->rabo = anterior->rabo;
			anterior->rabo = novoElemento;
		}
	} while (chaveNumero != -1);
	imprimir();
}

void ListaEnc::remover()
{
	int procuraChave;
	Nodo* aux;
	Nodo* anterior = NULL;

	do
	{
		aux = cabeca;
		cin >> procuraChave;
		if (procuraChave == -1)
			break;
		while (aux != NULL && aux->d.chave != procuraChave)  //Busca o elemento
		{
			anterior = aux;
			aux = aux->rabo;
		}
		if (aux == NULL) //Não encontrou o elemento
		{
			return;
		}
		if (anterior == NULL) //Remove o primeiro elemento
		{ 
			cabeca = aux->rabo;
		}
		else //Remove o elemento do meio ou fim
		{
			anterior->rabo = aux->rabo;
		}
		free(aux);
	} while (procuraChave != -1);
	imprimir();
}

void ListaEnc::buscar()
{
	int procuraChave;
	Nodo* aux;
	
	do
	{
		aux = cabeca;
		cin >> procuraChave;
		cout << endl;
		while (aux != NULL && aux->d.chave != procuraChave)
		{
			aux = aux->rabo;
		}
		if (aux == NULL)
		{
			cout << procuraChave << " não está contido na lista!";
		}
		else
			cout << procuraChave << " está contido na lista!";
	} while (procuraChave != -1);
	cout << endl;
}

void ListaEnc::destruir()
{
	Nodo* aux;

	aux = cabeca;
	while(cabeca != NULL)
	{
		aux = cabeca;
		cabeca = cabeca->rabo;
		free(aux);
	}
	cout << "### A lista foi destruída! ###" << endl;
}
