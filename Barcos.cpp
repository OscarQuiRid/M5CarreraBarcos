#include "Barcos.h"
#include <iostream>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

Barcos::Barcos() {
	nombre = "";
	tipo = "";
	velocidad = 0;
	atk = false;
}
Barcos::Barcos(string pNombre, string pTipo, int pVelocidad, bool pAtk) {
	nombre = pNombre;
	tipo = pTipo;
	velocidad = pVelocidad;
	atk = pAtk;
}