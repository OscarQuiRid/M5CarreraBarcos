#pragma once
#include<iostream>

using namespace std;

class Barcos
{
private:
	/// CARRERA
	string apodo;				// nombre que tendra el jugador
	int puntos;					// puntos 
	int turnoCarrera;			// contador de turnos para ir restando o sumando turnos para realizar el final de la carrera
	int distancia;				// distancia que lleva recorrida////////falta set y get

	/// ATK
	string nombreAtk;			// nombre del atk
	string descripcionAtk;		// descripcion de la que consiste el atk
	//bool agresivo;			// atacaras al enemigo para conseguir reducir su velocidad
	//bool defensivo;			// conseguiras velocidad defensa para lograr distanciarte o que tu rival no te atake 

	/// BARCOS
	string nombre;				// nombre del barco
	string tipo;				// tipo de barco
	int velocidad;				// velocidad en km/h
	bool atk;					// boolean para activar o no el atk (cada 2 turnos)
	int vidas;                  // vidas del barco si llega a 0 se unde y se termina la partida

public:

	/// CARRERA
	string getApodo();
	int getPuntos();
	int getTurnoCarrera();
	int getDado();

	void setApodo(string pApodo);
	void setPuntos(int pPuntos);
	void setTurnoCarrera(int pTurnoCarrera);

	/// ATK
	string getNombreAtk();
	string getDescripcionAtk();

	void setNombreAtk(string pNombreAtk);
	void setDescripcionAtk(string pDescripcionAtk);

	/// BARCOS
	Barcos();
	Barcos(string pNombre, int pVelocidad, bool pAtk, int pVidas);

	string getNombre();
	string getTipo();
	int getVelocidad();
	bool getAtk();
	int getVidas();

	void setNombre(string pNombre);
	void setTipo(string pTipo);
	void setVelocidad(int pVelocidad);
	void setAtk(bool pAtk);
	void setVidas(int pVidas);

	void crearBarcos();
};