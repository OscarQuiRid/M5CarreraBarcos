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
	int turno;
	
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
	int getTurno();
	int getpuntos();

	void setApodo(string pApodo);
	void setPuntos(int pPuntos);
	void setNombreBarco(string pNombre);
	void setVelocidad(int pVelocidad);
	void setAtk(bool pAtk);
	void setVidas(int pVidas);
	void setNombreAtk(string pNombreAtk);
	void setDescripcionAtk(string pDescripcionAtk);
	void setTurno(int pTurno);
	void setpuntos(int& pPuntos);

	void puntosPlayer(int& pPuntosPlayer, int pDice);
	void puntosEnemyUno(int& pPuntosEUno, int pDice);
	void puntosEnemyDos(int& pPuntosEDos, int pDice);
	void intro();
	void eleccionBarco(string& pNombreBarco, bool& pPlayerUnoIniciar, int& pBoatPlayer);
	void barcoEnemigo(string& pNombreBarco, int pBoatPlayer);
	void apodoEnemigo(string& pApodoEnemyUno, string& pApodoEnemyDos, bool& penemyUnoIniciar, bool& penemyDosIniciar);
	void presentacionCarrera(string& pText, string& pDisparo);
	void dice(int& pDicePlayer, int& pDiceEnemyUno, int& pDiceEnemyDos);
	void nitro(int& turnoPlayer, int& turnoEnemyUno, int& turnoEnemyDos, int& pDicePlayer, int& pDiceEnemyUno, int& pDiceEnemyDos, string pText, string pTextUno, string pTextDos);
	void printCarrera(int pPuntosPlayer, int pPuntosEnemyUno, int pPuntosEnemyDos, string pText, string pTextUno, string pTextDos);

	void pausaSeiscientos();
	void pausaMil();
	string tab();
	string salto();

};