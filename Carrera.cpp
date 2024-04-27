#include "Carrera.h"
#include <iostream>
#include <vector>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

Carrera::Carrera() {
	velocidad = 0;
	distancia = 0;
	nitro = false;
	apodo = "";
	dado = 0;
	puntos = 0;
	turno = 0;
}
Carrera::Carrera(int pVelocidad, int pDist, bool pNitro, string pApodo, int pPuntos, int pTurno) {
	velocidad = pVelocidad;
	distancia = pDist;
	nitro = pNitro;
	apodo = pApodo;
	puntos = pPuntos;
	turno = pTurno;

}