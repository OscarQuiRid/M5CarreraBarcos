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
	return vida;
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
	vida = pVidas;
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


void Barcos::eleccionBarco(string& pNombreBarco, string& pNombreAtk, bool& pPlayerUnoIniciar, int& pBoatPlayer) {
	string eleccion;

	bool cat = true;
	while (cat == true)
	{
		cout << "Escoje una categoria: \n \t 1.- Small Barcos. \n \t 2.- Medium Barcos. \n \t 3.- Big Barcos. \n Opcion: ";
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

							pNombreBarco = "Kayuco";
							pNombreAtk = "atkKayuco";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 1;

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
				else if (eleccion == "2")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\n Balsa \n \t Descripcion: Embarcacion simple echa de troncos unidos entre si";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

							pNombreBarco = "Balsa";
							pNombreAtk = "atkBalsa";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 1;

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
				else if (eleccion == "3")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\n Gondola \n \t Descripcion: Embarcacion tradicional de venecia, muy conocida por por sus elegante diseños y su usos por la ciudad";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

							pNombreBarco = "Gondola";
							pNombreAtk = "atkGondola";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 1;

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
				else if (eleccion == "0")
				{
					escbarco = false;
				}
				else
				{
					cout << "\nEleccion incorrecta";
				}
			}
		}
		else if (eleccion == "2")
		{
			bool escbarco = true;
			while (escbarco == true)
			{
				cout << "Tienes 3 barcos en esta categoria cual quieres escojer?";
				cout << "\n \t 1.- Narcolancha. \n \t 2.- Galera. \n \t 3.- Drakkar. \n \t 0.- Menu anterior. \n Opcion: ";
				cin >> eleccion;
				if (eleccion == "1")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\nNarcolancha \n \t Descripcion: ";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: Embarcacion inchable usada originalmente para rescate, buceo y exploracion de aguas costeras, ahora adaptada para trabajar!";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

							pNombreBarco = "Narcolancha";
							pNombreAtk = "atkNarcolancha";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 2;

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
				else if (eleccion == "2")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\n Galera \n \t Descripcion: Embarcacion utilizada en la edad media, equipada con muchas filas de remos y catapultas";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

							pNombreBarco = "Galera";
							pNombreAtk = "atkGalera";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 2;

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
				else if (eleccion == "3")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\n Drakkar \n \t Descripcion: Envarcacion vkinga utilizada por guerreros durante la edad media";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

							pNombreBarco = "Drakkar";
							pNombreAtk = "atkDrakkar";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 2;

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
				else if (eleccion == "0")
				{
					escbarco = false;
				}
				else
				{
					cout << "\nEleccion incorrecta";
				}
			}
		}
		else if (eleccion == "3")
		{
			bool escbarco = true;
			while (escbarco == true)
			{
				cout << "Tienes 3 barcos en esta categoria cual quieres escojer?";
				cout << "\n \t 1.- Buque mercante. \n \t 2.- Crucero de lujo. \n \t 3.- Buque de investigacion. \n \t 0.- Menu anterior. \n Opcion: ";
				cin >> eleccion;
				if (eleccion == "1")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\n Buque mercante \n \t Descripcion: Utilizado para el transporte de mercancias";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

							pNombreBarco = "Buque mercante";
							pNombreAtk = "atkBuquemercante";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 3;

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
				else if (eleccion == "2")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\n Crucero swinger de lujo \n \t Descripcion: Cruzero donde todos los pasajeros son jubilados y liberales";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {
							pNombreBarco = "Crucero de lujo";
							pNombreAtk = "atkCruceroDeLujo";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 3;

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
				else if (eleccion == "3")
				{
					bool tipBarco = true;
					while (tipBarco == true)
					{
						cout << "\n Buque de Investigacion \n \t Descripcion: buque dedicado a la investigacion en alta mar";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {
							pNombreBarco = "Buque de Investigacion";
							pNombreAtk = "atkBuquedeInvestigacion";
							pPlayerUnoIniciar = true;
							pBoatPlayer = 3;

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
				else if (eleccion == "0")
				{
					escbarco = false;
				}
				else
				{
					cout << "\nEleccion incorrecta";
				}
			}
		}
		else
		{
			cout << "\nEleccion incorrecta";
		}
	}
}


void Barcos::barcoEnemigo(string& nombreBarcoe,int& velocidadBarcoe,int& Vidae,bool& atke,string& nombreatke,string& descripcionatke, int& bpe) {

	int random = rand() % 3 + 1;
	switch (bpe)
	{
	case 1:
		if (true)
		{

		}
		else if (true)
		{

		}
		else if (true)
		{

		}
		cout << "dentro de la funcion";
		nombreBarcoe = "a";
		velocidadBarcoe = 100;
		Vidae = 100;
		atke = true;
		nombreatke = "b";
		descripcionatke = "c";
		break;
	case 2:
		cout << "dentro de la funcion";
		nombreBarcoe = "a";
		velocidadBarcoe = 100;
		Vidae = 100;
		atke = true;
		nombreatke = "b";
		descripcionatke = "c";
		break;
	case 3:
		cout << "dentro de la funcion";
		nombreBarcoe = "a";
		velocidadBarcoe = 100;
		Vidae = 100;
		atke = true;
		nombreatke = "b";
		descripcionatke = "c";
		break;
	}
}