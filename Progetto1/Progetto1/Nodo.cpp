#include"Nodo.h"
Nodo::Nodo() {
	punt = 0; //ora è il primo
}

Nodo::Nodo(int x) {
	punt = 0;
	info = x;
}

int Nodo::getInfo() {
	return info;
}

void Nodo::setInfo(int x) {
	info = x;
}

Nodo* Nodo::getPunt() {
	return punt;
}

void Nodo::setPunt(Nodo* P) {
	punt = P;
}

Nodo::~Nodo() {
}
