#include"lista.h"
#include"lista.cpp"
#include"Nodo.h"
#include"Nodo.cpp"
#include<iostream>
using namespace std;
int main() {
	int elemento;
	cout << "Elemento: ";
	cin >> elemento;
	Lista <int>miaLista;
	miaLista.InserisciInTesta(elemento);
	miaLista.Visualizza();
	cin >> elemento;
	miaLista.InserisciInCoda(elemento);
	cout << endl;
	cin >> elemento;
	miaLista.InserisciOrdinato(elemento);
	cout << endl;
	miaLista.Visualizza();
	miaLista.Inverti();
	cout << endl;
	miaLista.Visualizza();
	cout << endl;
	system("PAUSE");
	return 0;
}
