#include"lista.h"
#include"Nodo.h"
#include<iostream>
using namespace std;

int main(){
	int elemento;
	int ele2;
	cout << "Elemento: ";
	cin >> elemento;
	Lista miaLista;
	miaLista.InserisciInTesta(elemento);
	miaLista.Visualizza();
	cin >> elemento;
	miaLista.InserisciInCoda(elemento);
	cout << endl;
	cin >> elemento;
	miaLista.InserisciOrdinato(elemento);
	cout << endl;
	miaLista.Visualizza();
	miaLista.reverseList();
	cout << endl;
	miaLista.Visualizza();
	cout << endl;
	system("PAUSE");
	return 0;
}
