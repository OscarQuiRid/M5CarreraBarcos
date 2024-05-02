#include "Barcos.h"
#include <iostream>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

//int Barcos::getDado() {
//	return (rand() % 6 + 1);;
//}
Barcos::Barcos() {
	// Constructor por defecto
}

string Barcos::getApodo() {
	return apodo;
}

int Barcos::getPuntos() {
	return puntos;
}

string Barcos::getNombreBarco() {
	return nombreBarco;
}

int Barcos::getVelocidad() {
	return velocidadBarco;
}

bool Barcos::getAtk() {
	return atk;
}

int Barcos::getVidas() {
	return vidas;
}

string Barcos::getNombreAtk() {
	return nombreAtk;
}

string Barcos::getDescripcionAtk() {
	return descripcionAtk;
}

void Barcos::setApodo(string pApodo) {
	apodo = pApodo;
}

void Barcos::setPuntos(int pPuntos) {
	puntos = pPuntos;
}

void Barcos::setNombreBarco(string pNombre) {
	nombreBarco = pNombre;
}

void Barcos::setVelocidad(int pVelocidad) {
	velocidadBarco = pVelocidad;
}

void Barcos::setAtk(bool pAtk) {
	atk = pAtk;
}

void Barcos::setVidas(int pVidas) {
	vidas = pVidas;
}

void Barcos::setNombreAtk(string pNombreAtk) {
	nombreAtk = pNombreAtk;
}

void Barcos::setDescripcionAtk(string pDescripcionAtk) {
	descripcionAtk = pDescripcionAtk;
}

void Barcos::introApodo(Barcos playerUno) {
	string playerApodo;
	cout << "En este juego vamos a ver unas trepidantes carreras de barcos,\n";
	cout << "en las cuales vamos a disponer de 6 turnos, competiremos contra 2 enemigos y podremos atacar o lograr ventajas sobre el resto de contrincantes.\n";
}

