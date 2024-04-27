#pragma once
#include <iostream>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

class Carrera
{
private:
	int velocidad;
	int distancia;
	bool nitro;
	string apodo;
	int puntos;
	int turno;

	string nombreAtk;
	string descripcion;
	int atk;
	int velocidad;

	int dado;
public:
	Carrera();
	Carrera(int pVelocidad, int pDist, bool pNitro,string pApodo,int pPuntos, int pTurno);

};