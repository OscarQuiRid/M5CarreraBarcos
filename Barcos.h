#pragma once
#include<iostream>

using namespace std;


class Barcos
{
private:
	string nombre;				// nombre del barco
	string tipo;				// tipo de barco
	int velocidad;				// velocidad en km/h
	bool atk;					// boolean para activar o no el atk (cada 2 turnos)

public:
	Barcos();
	Barcos(string pNombre, string pTipo,int pVelocidad, bool pAtk);
};