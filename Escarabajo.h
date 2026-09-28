#pragma once
#include "Insecto.h"
#include <iostream>
using namespace std;

class Escarabajo : public Insecto
{
private:
	string familia;
	bool puede_volar;
public:
	string getfamilia();
	bool getpuede_volar();
	void setfamilia(string pfamilia);
	void setpuede_volar(bool ppuede_volar);

	void mostrar_datos();

	Escarabajo(string pnombre_cientifico, int pnumero_patas, string pcolor, string pfamilia, bool ppuede_volar);
	~Escarabajo();

};

Escarabajo::Escarabajo(string pnombre_cientifico, int pnumero_patas, string pcolor, string pfamilia, bool ppuede_volar) : Insecto(pnombre_cientifico, pnumero_patas, pcolor)
{
	familia = pfamilia;
	puede_volar = ppuede_volar;
}

Escarabajo::~Escarabajo()
{
	//Destructor vacio
}

string Escarabajo::getfamilia()
{
	return familia;
}

bool Escarabajo::getpuede_volar()
{
	return puede_volar;
}

void Escarabajo::setfamilia(string pfamilia)
{
	familia = pfamilia;
}

void Escarabajo::setpuede_volar(bool ppuede_volar)
{
	puede_volar = ppuede_volar;
}

void Escarabajo::mostrar_datos()
{
	Insecto::mostrar_datos();
	cout << "Familia: " << familia << endl;
	cout << "Puede volar: " << puede_volar << endl;

}