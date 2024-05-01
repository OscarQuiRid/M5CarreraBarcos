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
int Barcos::getDado() {
	return (rand() % 6 + 1);;
}
void Barcos::setApodo(string pApodo) {
	apodo = pApodo;
}
void Barcos::setPuntos(int pPuntos) {
	puntos = pPuntos;
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
	nombreBarco = "";
	velocidadBarco = 0;
	atk = false;
	vidas = 3;
}
Barcos::Barcos(string pnombre, int pvelocidad, bool patk, int pvidas, string pNombreAtk) {
	nombreBarco = pnombre;
	velocidadBarco = pvelocidad;
	atk = patk;
	vidas = pvidas;
	nombreAtk = pNombreAtk;
}
void Barcos::setNombre(string pNombre) {
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

string Barcos::getNombre() {
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
// nose si esto es necesario...
vector<Barcos> Barcos::getPlayerVector() {
	return player;
}

void Barcos::introApodo() {
	string apodo;
	Barcos cargador;
	cout << "en este juego vamos a ver unas trepidantes carreras de barcos,\n";
	cout << "en las cuales vamos a disponer de 6 turnos, vamos a competir contra 2 enemigos y nos vamos a poder atacar o lograr ventajas sobre o al resto de contrincantes\n";
	cout << "Cual es tu apodo en la carrera?\n";
	cin >> apodo;
	cargador.setApodo(apodo);
	cout << "bienvenido " << cargador.getApodo() << "\n";
}

void Barcos::eleccionBarco() {
	bool categoria = false;
	while (categoria == false)
	{
		string eleccion;
		bool escbarco = false;

		cout << "Escoje una categoria: \n \t 1.- Small Barcos. \n \t 2.- Medium Barcos. \n \t 3.- Big Barcos. \n \t 0.- Salir del Juego.";
		cin >> eleccion;

		if (eleccion == "1")
		{
			while (escbarco = false)
			{
				cout << "Tienes 3 barcos en esta categoria cual quieres escojer?\n";
				cout << "1.- Kayuco. \n \t 2.- Balsa. \n \t 3.- Gondola. \n \t 0.- Menu anterior.";
				cin >> eleccion;
				if (eleccion == "1")
				{
					bool barco = true;
					while (barco == true)
					{
						cout << "kayuco \n \t Descripcion: Pequenia envarcacion tradicional utilizada por los indigenas de america central y sur";
						cout << "Escojes este tipo de barco? s/n";
						cin >> eleccion;

						if (eleccion == "s" or eleccion == "S" or eleccion == "si" or eleccion == "SI")
						{
							Barcos playerUno;
							playerUno.apodo = playerUno.getApodo();
							playerUno.puntos = 0;
							playerUno.nombreBarco = "Kayuco";
							playerUno.velocidadBarco = 2;
							playerUno.vidas = 1;
							playerUno.atk = false;
							playerUno.nombreAtk = "atkKayuco";
							playerUno.descripcionAtk = "Lanza cadaveres al agua";
							player.push_back(playerUno);

							barco = false;

						}
						if (eleccion == "n" or eleccion == "N" or eleccion == "no" or eleccion == "NO")
						{
							barco = false;
						}
						else
						{
							cout << "Eleccion incorrecta";
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

				}
				else
				{
					cout << "Eleccion incorrecta";
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

		}
		else
		{
			cout << "Eleccion incorrecta";
		}
	}
}