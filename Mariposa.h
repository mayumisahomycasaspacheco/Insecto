#pragma once
#include "Insecto.h"
#include <iostream>
using namespace std;

class Mariposa : public Insecto //Herencia
{
private:
	double envergadura_alas;
	string tipo_alimentacion;
public:

	double getenvergadura_alas();
	string gettipo_alimentacion();

	void setenvergadura_alas(double penvergadura_alas);
	void settipo_alimentacion(string ptipo_alimentacion);

	void mostrar_datos();

	Mariposa(string pnombre_cientifico, int pnumero_patas, string pcolor, double penvergadura_alas, string ptipo_alimentacion);
	~Mariposa();

};

Mariposa::Mariposa(string pnombre_cientifico, int pnumero_patas, string pcolor, double penvergadura_alas, string ptipo_alimentacion) : Insecto(pnombre_cientifico, pnumero_patas, pcolor)
{
	envergadura_alas = penvergadura_alas;
	tipo_alimentacion = ptipo_alimentacion;
}

Mariposa::~Mariposa()
{
	//Destructor vacio
}

double Mariposa::getenvergadura_alas()
{
	return envergadura_alas;
}

string Mariposa::gettipo_alimentacion()
{
	return tipo_alimentacion;
}

void Mariposa::setenvergadura_alas(double penvergadura_alas)
{
	envergadura_alas = penvergadura_alas;
}

void Mariposa::settipo_alimentacion(string ptipo_alimentacion)
{
	tipo_alimentacion = ptipo_alimentacion;
}

void Mariposa::mostrar_datos()
{
	Insecto::mostrar_datos();
	cout << "Wingspan: " << envergadura_alas << "cm" << endl;
	cout << "Feeding type: " << tipo_alimentacion << endl;
}