#include "Barcos.h"
#include <iostream>
#include <array>
#include <windows.h>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

//int Barcos::getDado() {
//	return (rand() % 6 + 1);;
//}
void Barcos::pausaSeiscientos() {
	Sleep(600);
}

void Barcos::pausaMil() {
	Sleep(1000);
}

string Barcos::tab() {
	return "\t";
}

string Barcos::salto() {
	return "\n";
}

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

int Barcos::getTurno() {
	return turno;
}

int Barcos::getpuntos() {
	return puntos;
}

void Barcos::setpuntos(int& pPuntos) {
	puntos = pPuntos;
}

void Barcos::setTurno(int pTurno) {
	turno = pTurno;
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

void Barcos::intro() {
	cout << "     _ _   _ _____ ____  ___    ____  _____   ____    _      ____   ____ ___   ____" + salto();
	cout << "    | | | | | ____/ ___|/ _ \\  | _  \\| ____| | __ )  / \\    | _  \\ / ___/ _ \\ / ___|" + salto();
	cout << " _| | | | | | _| | |  _| | | | | | | |  _|   |  _ \\ / _ \\   | |_) | |  | | | \\___ \\" + salto();
	cout << "| |_| | |_| | |__| |_| | |_| | | |_| | |___  | |_) / ___ \\  | _ < | |__| |_| |___) |" + salto();
	cout << "\\___ / \\___/|_____\\____|\\___/  |____/|_____| |____/_/   \\_\\_|_\\ \\_\\ ____\\___/|____ /" + salto() + salto() + salto();
}

void Barcos::eleccionBarco(string& pNombreBarco, bool& pPlayerUnoIniciar, int& pBoatPlayer) {
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
							//pNombreAtk = "atkKayuco";
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
							//pNombreAtk = "atkBalsa";
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
							//pNombreAtk = "atkGondola";
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
						cout << "\nNarcolancha \n \t Descripcion: Embarcacion inchable usada originalmente para rescate, buceo y exploracion de aguas costeras, ahora adaptada para trabajar!";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta:";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

							pNombreBarco = "Narcolancha";
							//pNombreAtk = "atkNarcolancha";
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
							//pNombreAtk = "atkGalera";
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
							//pNombreAtk = "atkDrakkar";
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
				cout << "\n \t 1.- Buque Mercante. \n \t 2.- Crucero Swinger De Lujo. \n \t 3.- Buque De Investigacion. \n \t 0.- Menu anterior. \n Opcion: ";
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
							//pNombreAtk = "atkBuqueMercante";
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
						cout << "\n Crucero Swinger De Lujo \n \t Descripcion: Cruzero donde todos los pasajeros son jubilados y liberales";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {
							pNombreBarco = "Crucero Swinger De Lujo";
							//pNombreAtk = "atkCruceroSwingerDeLujo";
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
						cout << "\n Buque De Investigacion \n \t Descripcion: buque dedicado a la investigacion en alta mar";
						cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
						cin >> eleccion;

						if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {
							pNombreBarco = "Buque De Investigacion";
							//pNombreAtk = "atkBuqueDeInvestigacion";
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

void Barcos::barcoEnemigo(string& pNombreBarco, int pBoatPlayer) {

	int random = rand() % 3 + 1;

	switch (pBoatPlayer)
	{
	case 1:
		if (random == 1)
		{
			pNombreBarco = "Kayuco";
			//pNombreAtk = "atkKayuco";
		}
		else if (random == 2)
		{
			pNombreBarco = "Balsa";
			//pNombreAtk = "atkBalsa";
		}
		else if (random == 3)
		{
			pNombreBarco = "Gondola";
			//pNombreAtk = "atkGondola";
		}
		break;
	case 2:
		if (random == 1)
		{
			pNombreBarco = "Narcolancha";
			//pNombreAtk = "Narcolancha";
		}
		else if (random == 2)
		{
			pNombreBarco = "Galera";
			//pNombreAtk = "Galera";
		}
		else if (random == 3)
		{
			pNombreBarco = "Drakkar";
			//pNombreAtk = "Drakkar";
		}
		break;
	case 3:
		if (random == 1)
		{
			pNombreBarco = "Buque Mercante";
			//pNombreAtk = "atk";
		}
		else if (random == 2)
		{
			pNombreBarco = "Crucero Swinger De Lujo";
			//pNombreAtk = "atkCruceroSwingerDeLujo";
		}
		else if (random == 3)
		{
			pNombreBarco = "Buque De Investigacion";
			//pNombreAtk = "atkBuqueDeInvestigacion";
		}
		break;
	}
}

void Barcos::apodoEnemigo(string& pApodoEnemyUno, string& pApodoEnemyDos, bool& penemyUnoIniciar, bool& penemyDosIniciar) {

	bool bucleActivo = true;
	while (bucleActivo == true)
	{
		int randomUno = rand() % 9;
		int randomDos = rand() % 9;
		string nombres[] = { "Muhammad","John","Maria","Wang","Li","Mohamed","Sofía","Juan","Yusuf","Chen" };
		pApodoEnemyUno = nombres[randomUno];
		pApodoEnemyDos = nombres[randomDos];
		if (pApodoEnemyUno != pApodoEnemyDos)
		{
			bucleActivo = false;
			penemyUnoIniciar = true;
			penemyDosIniciar = true;
		}
	}
}

void Barcos::presentacionCarrera(string& pText, string& pDisparo) {

	pText = tab() + tab() + "Bienvenidos a la carrera mas emocionante del anyo. Preparense para la adrenalina,la velocidad y la competencia en su maxima expresion." + salto() + tab() + tab() + tab() + "Que gane el mejor! 3...2...1..." + salto();
	pDisparo = tab() + tab() + tab() + tab() + " ____  _   _ __  __ __  __ __  __ _ _ _ " + salto() +
		tab() + tab() + tab() + tab() + "|  _ \\| | | |  \\/  |  \\/  |  \\/  | | | |" + salto() +
		tab() + tab() + tab() + tab() + "| |_) | | | | |\\/| | |\\/| | |\\/| | | | |" + salto() +
		tab() + tab() + tab() + tab() + "|  __/| |_| | |  | | |  | | |  | |_|_|_|" + salto() +
		tab() + tab() + tab() + tab() + "|_|    \\___/|_|  |_|_|  |_|_|  |_(_|_|_)" + salto();
}

void Barcos::dice(int& pDicePlayer, int& pDiceEnemyUno, int& pDiceEnemyDos) {

	pDicePlayer = rand() % 6 + 1;
	pDiceEnemyUno = rand() % 6 + 1;
	pDiceEnemyDos = rand() % 6 + 1;
}

void Barcos::puntosPlayer(int& pPuntosPlayer, int pDice) {
	pPuntosPlayer = pPuntosPlayer + pDice;
}

void Barcos::puntosEnemyUno(int& pPuntosEUno, int pDice) {
	pPuntosEUno = pPuntosEUno + pDice;
}

void Barcos::puntosEnemyDos(int& pPuntosEDos, int pDice) {
	pPuntosEDos = pPuntosEDos + pDice;
}

void Barcos::nitro(int& turnoPlayer, int& turnoEnemyUno, int& turnoEnemyDos, int& pDicePlayer, int& pDiceEnemyUno, int& pDiceEnemyDos, string pText, string pTextUno, string pTextDos) {

	string eleccion = "";
	int fracaso = 0;
	bool usarNitro = true;
	if (turnoPlayer >= 2)
	{
		while (usarNitro == true)
		{
			cout << "Quieres usar un chute de nitro?(corres el riesgo de perder el valor generado en el dado) s/n \n Respuesta: ";
			cin >> eleccion;
			if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {

				fracaso = rand() % 3;

				if (fracaso == 0)
				{
					pDicePlayer = 0;
					cout << pText << " Nitro no te a funcionado! Pierdes el valor del dado!!!\n";
				}
				else
				{
					pDicePlayer *= 2;
					cout << pText << " Bienn!! has multiplicado el resultado del dado x2\n";
				}
				turnoPlayer = 0;
				usarNitro = false;
			}
			else if (eleccion == "n" || eleccion == "N" || eleccion == "no" || eleccion == "NO") {
				usarNitro = false;
			}
			else if (!(eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI" ||
				eleccion == "n" || eleccion == "N" || eleccion == "no" || eleccion == "NO")) {
				cout << "\nEleccion incorrecta\n";
			}
		}
	}
	usarNitro = true;
	if (turnoEnemyUno >= 2)
	{
		while (usarNitro == true)
		{
			fracaso = rand() % 2;
			if (fracaso == 1) {

				fracaso = rand() % 3;

				if (fracaso == 0)
				{
					pDiceEnemyUno = 0;
					cout << "Nitro de " << pTextUno << " no a funcionado! Pierde el valor del dado!!!\n";
				}
				else
				{
					pDiceEnemyUno *= 2;
					cout << pTextUno << " Uso nitro!! ha multiplicado el resultado del dado x2\n";
				}
				turnoEnemyUno = 0;
				usarNitro = false;
			}
			else if (fracaso == 0) {
				usarNitro = false;
			}
		}
	}
	usarNitro = true;
	if (turnoEnemyDos >= 2)
	{
		while (usarNitro == true)
		{
			fracaso = rand() % 2;
			if (fracaso == 1) {

				fracaso = rand() % 3;

				if (fracaso == 0)
				{
					pDiceEnemyDos = 0;
					cout << "Nitro de " << pTextDos << " no a funcionado! Pierde el valor del dado!!!\n";
				}
				else
				{
					pDiceEnemyDos *= 2;
					cout << pTextDos << " Uso nitro!! ha multiplicado el resultado del dado x2\n";
				}
				turnoEnemyDos = 0;
				usarNitro = false;
			}
			else if (fracaso == 0) {
				usarNitro = false;
			}
		}
	}
}

void Barcos::printCarrera(int pPuntosPlayer, int pPuntosEnemyUno, int pPuntosEnemyDos, string pText, string pTextUno, string pTextDos) {

	string player[72];
	string enemyUno[72];
	string enemyDos[72];

	for (int i = 0; i <= pPuntosPlayer && i < 72; ++i) {
		if (i == pPuntosPlayer) {
			player[i] = pText;
		}
		else {
			player[i] = "~";
		}
	}
	for (int i = 0; i <= pPuntosEnemyUno && i < 72; ++i) {
		if (i == pPuntosEnemyUno) {
			enemyUno[i] = pTextUno;
		}
		else {
			enemyUno[i] = "~";
		}
	}
	for (int i = 0; i <= pPuntosEnemyDos && i < 72; ++i) {
		if (i == pPuntosEnemyDos) {
			enemyDos[i] = pTextDos;
		}
		else {
			enemyDos[i] = "~";
		}
	}
	for (int i = 0; i < 72 && !player[i].empty(); ++i) {
		cout << player[i];
	}
	cout << "\n";

	// Imprimir la carrera del enemigo 1 (`enemyUno`)
	for (int i = 0; i < 72 && !enemyUno[i].empty(); ++i) {
		cout << enemyUno[i];
	}
	cout << "\n";

	// Imprimir la carrera del enemigo 2 (`enemyDos`)
	for (int i = 0; i < 72 && !enemyDos[i].empty(); ++i) {
		cout << enemyDos[i];
	}
	cout << "\n";
};

void Barcos::printGanador(int pPuntosPlayer, int pPuntosEnemyUno, int pPuntosEnemyDos, string pText, string pTextUno, string pTextDos) {
	string ganador;
	int maxPuntos = pPuntosPlayer;

	if (pPuntosEnemyUno > maxPuntos) {
		maxPuntos = pPuntosEnemyUno;
		ganador = pTextUno;
	}
	if (pPuntosEnemyDos > maxPuntos) {
		maxPuntos = pPuntosEnemyDos;
		ganador = pTextDos;
	}

	cout << "**************************" << endl;
	cout << "*       ¡GANADOR!        *" << endl;
	cout << "**************************" << endl;
	cout << "   El ganador es: " << ganador << endl;
	cout << "   Puntos obtenidos:" << endl;
	cout << "   " << pText << ": " << pPuntosPlayer << endl;
	cout << "   " << pTextUno << ": " << pPuntosEnemyUno << endl;
	cout << "   " << pTextDos << ": " << pPuntosEnemyDos << endl;
}

void Barcos::salirJuego(bool salirJuego) {

	bool menu = true;
	while (menu == true)
	{
		char eleccion;
		cout << "Quieres jugar otra partida o salir? (Espacio/Salir): \n Respuesta: ";
		cin >> eleccion;

		if (eleccion != 's' && eleccion != 'S') {
			salirJuego = false;
			menu = false;
		}
		else
		{
			menu = false;
		}
	}
}