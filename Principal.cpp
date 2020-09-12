#include <iostream>
#include <stdlib.h>
#include "ListaEnc.h"

using namespace std;

int main()
{
	char opcao;

	ListaEnc l;

	setlocale(LC_ALL, "");
	do
	{
		cout << "\nDigite a opção desejada: ";
		cin >> opcao;
		cout << endl; 
		switch (opcao)
		{
		case 'A': //Imprimir lista
			l.imprimir();
			break;
		case 'B': //Adicionar elemento
			l.adicionar();
			break;
		case 'C': //Remover elemento
			l.remover();
			break;
		case 'D': //Buscar elemento
			l.buscar();
			break;
		case 'E': //Destruir lista
			l.destruir();
			break;
		default:
			cout << "PROGRAMA ENCERRADO" << endl;
			system("pause");
		}
		cout << "\n>> Para encerrar o programa, digite \"-1\" ";
		if (opcao == '-1')
			return 0;
	} while (opcao == 'A' || opcao == 'B' || opcao == 'C' || opcao == 'D' || opcao == 'E');
}