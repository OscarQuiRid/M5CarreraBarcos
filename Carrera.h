#pragma once
#include <iostream>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

class Carrera
{
private:

	string apodo;				// nombre que tendra el jugador
	int puntos;					// puntos 
	int turno;					// contador de turnos para ir restando o sumando turnos para realizar el final de la carrera
	int dado;					// dado
	int distancia;				// distancia que lleva recorrida////////falta set y get

public:
	string getApodo();
	int getPuntos();
	int getTurno();
	int getDado();

	void setApodo(string pApodo);
	void setPuntos(int pPuntos);
	void setTurno(int pTurno);
	void setDado(int pDado);

};