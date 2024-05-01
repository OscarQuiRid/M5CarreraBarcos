#pragma once
#include<iostream>
#include<vector>

using namespace std;

class Barcos
{
private:
	/// CARRERA
	string apodo;				// nombre que tendra el jugador
	int puntos;					// puntos 

	/// BARCOS
	string nombreBarco;				// nombre del barco
	int velocidadBarco;				// velocidad en km/h
	int vidas;                  // vidas del barco si llega a 0 se unde y se termina la partida

	/// ATK
	bool atk;					// boolean para activar o no el atk (cada 2 turnos)
	string nombreAtk;			// nombre del atk
	string descripcionAtk;		// descripcion de la que consiste el atk cuando vas por delante de alguien

	vector<Barcos>player;
public:

	/// CARRERA
	string getApodo();
	int getPuntos();
	int getDado();

	void setApodo(string pApodo);
	void setPuntos(int pPuntos);

	/// ATK
	string getNombreAtk();
	string getDescripcionAtk();

	void setNombreAtk(string pNombreAtk);
	void setDescripcionAtk(string pDescripcionAtk);

	/// BARCOS
	Barcos();
	Barcos(string pNombre, int pVelocidad, bool pAtk, int pVidas, string pNombreAtk);

	string getNombre();
	int getVelocidad();
	bool getAtk();
	int getVidas();

	void setNombre(string pNombre);
	void setVelocidad(int pVelocidad);
	void setAtk(bool pAtk);
	void setVidas(int pVidas);

	void introApodo();
	void eleccionBarco();

	// nose si esto es necesario...
	vector<Barcos>getPlayerVector();
};