#include "Carrera.h"
#include <iostream>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

string Carrera::getApodo() {
	return apodo;
}
int Carrera::getPuntos() {
	return puntos;
}
int Carrera::getTurno() {
	return turno;
}
int Carrera::getDado() {
	return dado;
}
void Carrera::setApodo(string pApodo) {
	apodo = pApodo;
}
void Carrera::setPuntos(int pPuntos) {
	puntos = pPuntos;
}
void Carrera::setTurno(int pTurno) {
	turno = pTurno;
}
void Carrera::setDado(int pDado) {
	dado = pDado;
}