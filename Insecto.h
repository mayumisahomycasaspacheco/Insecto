#pragma once
#include <iostream>
using namespace std;

class Insecto
{
protected:
	string nombre_cientifico;
	int numero_patas;
	string color;
public:
	string getnombre_cientifico();
	int getnumero_patas();
	string getcolor();

	void setnombre_cientifico(string pnombre_cientifico);
	void setnumero_patas(int pnumero_patas);
	void setcolor(string pcolor);

	void mostrar_datos();

	Insecto(string pnombre_cientifico, int pnumero_patas, string pcolor);
	~Insecto();
};

Insecto::Insecto(string pnombre_cientifico, int pnumero_patas, string pcolor)
{
	nombre_cientifico = pnombre_cientifico;
	numero_patas = pnumero_patas;
	color = pcolor;
}

Insecto::~Insecto()
{
	//Destructor vacio
}

string Insecto::getnombre_cientifico()
{
	return nombre_cientifico;
}

int Insecto::getnumero_patas()
{
	return numero_patas;
}

string Insecto::getcolor()
{
	return color;
}

void Insecto::setnombre_cientifico(string pnombre_cientifico)
{
	nombre_cientifico = pnombre_cientifico;
}

void Insecto::mostrar_datos()
{
	cout << "Scientific name: " << nombre_cientifico << endl;
	cout << "Number of legs: " << numero_patas << endl;
	cout << "Insect color: " << color << endl;
}