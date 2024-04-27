#include "Barcos.h"
#include <iostream>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u


/// CARRERA
string Barcos::getApodo() {
	return apodo;
}
int Barcos::getPuntos() {
	return puntos;
}
int Barcos::getTurnoCarrera() {
	return turnoCarrera;
}
int Barcos::getDado() {
	return (rand() % 6 + 1);;
}
void Barcos::setApodo(string pApodo) {
	apodo = pApodo;
}
void Barcos::setPuntos(int pPuntos) {
	puntos = pPuntos;
}
void Barcos::setTurnoCarrera(int pTurnoCarrera) {
	turnoCarrera = pTurnoCarrera;
}

/// ATK
string Barcos::getNombreAtk() {
	return nombreAtk;
}
string Barcos::getDescripcionAtk() {
	return descripcionAtk;
}
void Barcos::setNombreAtk(string pNombreAtk) {
	nombreAtk = pNombreAtk;
}
void Barcos::setDescripcionAtk(string pDescripcionAtk) {
	descripcionAtk = pDescripcionAtk;
}


/// BARCOS
Barcos::Barcos() {
	nombre = "";
	tipo = "";
	velocidad = 0;
	atk = false;
	vidas = 3;
}
Barcos::Barcos(string pnombre, int pvelocidad, bool patk, int pvidas) {
	nombre = pnombre;
	velocidad = pvelocidad;
	atk = patk;
	vidas = pvidas;
}
void Barcos::setNombre(string pNombre) {
	nombre = pNombre;
}

void Barcos::setTipo(string pTipo) {
	tipo = pTipo;
}

void Barcos::setVelocidad(int pVelocidad) {
	velocidad = pVelocidad;
}

void Barcos::setAtk(bool pAtk) {
	atk = pAtk;
}

void Barcos::setVidas(int pVidas) {
	vidas = pVidas;
}

string Barcos::getNombre() {
	return nombre;
}

string Barcos::getTipo() {
	return tipo;
}

int Barcos::getVelocidad() {
	return velocidad;
}

bool Barcos::getAtk() {
	return atk;
}

int Barcos::getVidas() {
	return vidas;
}

void Barcos::crearBarcos() {
	Barcos barcoSmall1 = Barcos("Kayuco", 5, false, 1);
	Barcos barcoSmall2 = Barcos("Balsa", 5, false, 1);
	Barcos barcoSmall3 = Barcos("Gondola", 5, false, 1);
	Barcos barcoMedium1 = Barcos("Narcolancha", 8, false, 1);
	Barcos barcoMedium2 = Barcos("Galera", 8, false, 1);
	Barcos barcoMedium3 = Barcos("Drakkar", 8, false, 1);
	Barcos barcoBig1 = Barcos("Barco Mercante", 10, true, 1);
	Barcos barcoBig2 = Barcos("Cruzero de lujo", 10, true, 1);
	Barcos barcoBig3 = Barcos("Buque de investigacion", 10, true, 1);

}
