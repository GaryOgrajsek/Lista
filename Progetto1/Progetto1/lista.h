#pragma once
#include"Nodo.h"

class Lista {
	friend Lista operator +(Lista &, Lista &); //mantieni ordine DA FARE
	friend Lista Merge(const Lista &, const Lista &);
private:
	Nodo * L;
public:
	Lista();
	void InserisciInTesta(int);
	void InserisciInCoda(int);
	void InserisciOrdinato(int); //ordine crescente
	void Modifica(int, int);
	Nodo * Ricerca(int); //	ricerca un dato e restituisce il puntatore al nodo precedente quello che contiene il dato cercato
	void Visualizza();
	void Elimina(int);
	void EliminaTesta();
	void Inverti();
	~Lista();
};
