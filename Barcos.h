#pragma once
#include<iostream>

using namespace std;

class Barcos
{
private:

	string apodo;			// nombre que tendra el jugador
	int puntos;					// puntos 
	string nombreBarco;			// nombre del barco
	int velocidadBarco;			// velocidad en km/h
	int vida;                   // vidas del barco si llega a 0 se unde y se termina la partida
	bool atk;					// boolean para activar o no el atk (cada 2 turnos)
	string nombreAtk;			// nombre del atk
	string descripcionAtk;		// descripcion de la que consiste el atk cuando vas por delante de alguien

public:

	Barcos();

	string getApodo();
	int getPuntos();
	string getNombreBarco();
	int getVelocidad();
	bool getAtk();
	int getVidas();
	string getNombreAtk();
	string getDescripcionAtk();

	void setApodo(string pApodo);
	void setPuntos(int pPuntos);
	void setNombreBarco(string pNombre);
	void setVelocidad(int pVelocidad);
	void setAtk(bool pAtk);
	void setVidas(int pVidas);
	void setNombreAtk(string pNombreAtk);
	void setDescripcionAtk(string pDescripcionAtk);

	void introApodo(Barcos playerUno);
	void eleccionBarco(string& pNombreBarco, string& pNombreAtk, bool& pPlayerUnoIniciar, int& pBoatPlayer);
	void barcoEnemigo(string& pNombreBarco, string& pNombreAtk, bool& pPlayerUnoIniciar, bool& penemyIniciar, int pBoatPlayer);






};