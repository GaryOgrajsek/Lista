#include "lista.h"
#include<iostream>
using namespace std;

/*Lista operator +(Lista uno, Lista due) {
	cout << "no";
}*/

//implementare stack con i puntatori e lista

Lista Merge(const Lista & uno, const Lista & due) {
	Lista tre;
	Nodo *p1 = uno.L;
	Nodo *p2 = due.L;
	while (p1->getPunt() != 0 && p2->getPunt() != 0) {
		if (p1->getInfo() >= p2->getInfo()) {
			tre.InserisciInCoda(p2->getInfo());
			p2 = p2->getPunt();
		}
		else {
			tre.InserisciInCoda(p1->getInfo());
			p1 = p1->getPunt();
		}
	}
	while (p1 != 0) {
		tre.InserisciInCoda(p1->getInfo());
		p1 = p1->getPunt();
	}
	while (p2 != 0) {
		tre.InserisciInCoda(p2->getInfo());
		p2 = p2->getPunt();
	}
	return tre;
}
	
Lista::Lista() {
	L = 0; //se la lista è nuova, L non punta a niente.
}

void Lista::InserisciInTesta(int x) {
	Nodo *P = new Nodo(x); //parte costruttore nodo che mette 0 a punt e x a info
	P->setPunt(L);
	L = P;
}

void Lista::InserisciInCoda(int x) {
	Nodo *p = L;
	Nodo *temp = new Nodo(x);

	if (L != 0) {
		while (p->getPunt() != 0){
			p = p->getPunt();
		}

		p->setPunt(temp);
		temp->setPunt(0);
	}
	else 
		L = temp;
}

void Lista::InserisciOrdinato(int x) {
	Nodo *p = new Nodo(x);

	if (L == 0 || x < L->getInfo()) {
		p->setPunt(L);
		L = p;
	}
	else {
		Nodo *prec, *succ;
		succ = L;
		prec = 0;
		while (x > succ->getInfo() && succ->getPunt() != 0) {
			prec = succ;
			succ = succ->getPunt();
		}
		if (x > prec->getInfo() && x < succ->getInfo()) {
			prec->setPunt(p);
			p->setPunt(succ);
		}
		else{
			succ->setPunt(p);
		}
	}
}

void Lista::Visualizza() {
	Nodo *P = L;
	while (P != 0) { //così sennò non visualizza l'ultimo. E supera l'ultimo.
		cout << P->getInfo();
		P = P->getPunt();
	}
}

void Lista::VisualizzaNonOrdinato(){
	Nodo *P=L;
	while(Controlla(P)){
		cout<<p->getInfo();
		p = p->getPunt();
	}
}

bool Lista::Controllo(Nodo* q){
	Nodo* p=L;
	while(p != q && p!=q->getPunt()){
		p=p->getPunt();
	}
	return (p!=q->getPunt());
}

void Lista::Elimina(int x) {
	Nodo *succ, *prec;
	succ = L;
	prec = NULL;
	while (succ != 0 && succ->getInfo() != x) {
		prec = succ;
		succ = succ->getPunt();
	}
	if (succ != 0) {
		if (succ == L) {
			L = L->getPunt();
		}
		else {
			prec->setPunt(succ->getPunt());
		}
		delete succ;
	}
}

void Lista::EliminaTesta() {
	Nodo *P = L;
	if (P->getPunt() != 0) {
		L = P->getPunt();
		delete P;
	}
}

void Lista::Modifica(int prima, int dopo) {
	Nodo *p;
	p = L;
	if (L != 0) {	
		while (p != 0){
			if (p->getInfo() == prima) {
				p->setInfo(dopo);
				break;
			}
			else {
				p= p->getPunt();
			}
		}
	}
}

Nodo* Lista::Ricerca(int x) {
	Nodo *succ, *prec;
	succ = L;
	prec = NULL;
	if (L == 0) {
		cout << "Lista vuota.";
	}
	else {
		while (succ != 0 && succ->getInfo() != x) {
			prec = succ;
			succ = succ->getPunt();
		}
		return prec;
	}
}

void Lista::Inverti(){
	Nodo *q, *p, *r = 0;
	while (q != 0){
		q=q->getPunt();
		p->setPunt(r);
		r = p;
	}
}
	
Lista::~Lista() {
}
