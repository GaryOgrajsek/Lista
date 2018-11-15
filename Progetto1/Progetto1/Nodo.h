#pragma once
class Nodo {
private:
	int info;
	Nodo * punt;

public:
	Nodo();
	Nodo(int);
	int getInfo();
	void setInfo(int);
	Nodo* getPunt(); //poichè nodo è un puntatore a nodo
	void setPunt(Nodo*);
	~Nodo();
};



