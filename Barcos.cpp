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
	cout << "Cual es tu apodo en la carrera?\n";
	cin >> playerApodo;
	setApodo(playerApodo);
	cout << "Bienvenido " << getApodo() << "\n";
}

void Barcos::eleccionBarco(Barcos playerUno) {
	bool cat = true;
	while (cat == true)
	{
		string eleccion;

		cout << "Escoje una categoria: \n \t 1.- Small Barcos. \n \t 2.- Medium Barcos. \n \t 3.- Big Barcos. \n \t 0.- Salir del Juego.\n Opcion: ";
		cin >> eleccion;

		if (eleccion == "1")
		{
			bool escbarco = true;
			while (escbarco == true)
			{
				cout << "Tienes 3 barcos en esta categoria cual quieres escojer?";
				cout << "\n \t 1.- Kayuco. \n \t 2.- Balsa. \n \t 3.- Gondola. \n \t 0.- Menu anterior. \n Opcion: ";
				cin >> eleccion;
				if (eleccion == "1")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\nkayuco \n \t Descripcion: Pequenia envarcacion tradicional utilizada por los indigenas de america central y sur";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {
							cout << getApodo();
							playerUno.setPuntos(0);

							playerUno.setNombreBarco("Kayuco");
							playerUno.setVelocidad(2);
							playerUno.setVidas(1);
							playerUno.setAtk(false);
							playerUno.setNombreAtk("atkKayuco");
							playerUno.setDescripcionAtk("Lanza cadaveres al agua");

							cat = false;
							tipBarco = false;
							escbarco = false;
						}
						else if (eleccion == "n" || eleccion == "N" || eleccion == "no" || eleccion == "NO") {
							tipBarco = false;
						}
						else if (!(eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI" ||
							eleccion == "n" || eleccion == "N" || eleccion == "no" || eleccion == "NO")) {
							cout << "\nEleccion incorrecta";
						}
					}
				}
				if (eleccion == "2")
				{

				}
				if (eleccion == "3")
				{

				}
				if (eleccion == "0")
				{
					cout << "\ndentro del 0";//borrar

				}
				//else
				//{
				//	cout << "Eleccion incorrecta";
				//}
			}
		}
		if (eleccion == "2")
		{


		}
		if (eleccion == "3")
		{


		}
		if (eleccion == "0")
		{

		}
		//else
		//{
		//	cout << "Eleccion incorrecta";
		//}
	}
}