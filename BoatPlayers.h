#pragma once

#include<iostream>

using namespace std;

class BoatPlayers
{
private:
	string apodo;
	string nombreAtk;
	string nombre;
	int velocidad;
	bool atk;
	int vidas;
	int puntos;
	int turnoCarrera;

public:

	string getApodo();
	string getNombreAtk();


	void setApodo(string pApodo);
	void setNombreAtk(string pNombreAtk);



};

