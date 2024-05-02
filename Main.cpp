#include "Barcos.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// IDEAS
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// categoria que en la que quiere participar, barcos pequeños medianos o grandes
// crear distintos barcos, cayuco lancha transatlantico etc 
//					stats ideal a su tamaño y caracteristicas 
// crear atakes especiales para los distintos tipos de barco que cada uno tenga su caracteristica en funcion a su historia
//					que la maquina escoja un barco de manera random dentro de la categoria que escojio el player
//					los ataques se van a cargar ejemplo: turno 1 1/2, turno dos 1, turno tres pregunta para usar ataque, turno cuatro 1/2, turno cinco 1, turno 6 pregunta para usar ataque
//					si no usas el ataque no acumulas otro el maximo es 1
// 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ANOTACIONES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 1 nudo son 1,852km/h
//

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// LOGICA DEL JUEGO
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//[x] presentacion
//[x] saludar 
//[x] preguntar nombre
//[]   bucle del juego
//[-]	 preguntar que categoria quiere competir
//[-]		preguntar que barco quiere seleccionar
//[]			iniciar la carrera contra la maquina
//[]					se lanza el dado para el usuario
//[]						tirar el dado,sumar dice a la velocidad
//[]						decir a que velocidad vas
//[]				comparar turno del jugador y del enemigo y si los dos son iguales pasar si no mirar quien tiene que tirar(esto es x si alguien a perdido el turno)
//[]					lanzar el dado del rival
//[]						tirar el dado,sumar dice a la velocidad
//[]						decir a que velocidad va el ribal
//[]					decir que barco va mas rapido
//[]				comparar turno del jugador y del enemigo y si los dos son iguales pasar si no mirar quien tiene que tirar(esto es x si alguien a perdido el turno)
//[]					turno del jugador
//[]						tirar el dado,sumar dice a la velocidad
//[]						decir a que velocidad vas
//[]							si son dos vezes las que a lanzado, activar los atakes y mostrar mensaje de que los atakes estan disponibles (despues de lanzar el dado 2 veces se usara en el tercer turno)
//[]					turno del ribal 
//[]				comparar turno del jugador y del enemigo y si los dos son iguales pasar si no mirar quien tiene que tirar(esto es x si alguien a perdido el turno)
//[]						tirar el dado,sumar dice a la velocidad
//[]						decir a que velocidad vas
//[]							calcular segundo turno y poner en true los ataques al ser la maquina escojera si usarlo o no con un rand y escojera que ataque usar con un rand	
//[]				comparar turno del jugador y del enemigo y si los dos son iguales pasar si no mirar quien tiene que tirar(esto es x si alguien a perdido el turno) 
//[]					turno del jugador
//[]						decir que tiene los atakes disponibles,mostrar que ataques que tiene tanto de ataque, preguntar si quiere atacar o solo tirar el dado
//[]							logica del atake si lo quiere usar, reiniciar turnos para saber que tiene que volver a cargar los ataques
//[]						tirar el dado,sumar dice a la velocidad
//[]						decir a que velocidad vas
//[]			asi 10 turnos
//[]	mostrar quien llego mas lejos o llego vivo al final de la carrera




int main() {
	srand(time(NULL));
	Barcos playerUno;
	Barcos cargador;			// variable para cargar funciones
	string eleccion;
	bool playerUnoIniciar, enemyUnoIniciar, enemyDosIniciar = false;

	int bp = 0;

	bool juego = true;
	while (juego == true)
	{
		cargador.introApodo(playerUno);
		cout << "Cual es tu apodo en la carrera?\n";
		cin >> eleccion;
		playerUno.setApodo(eleccion);
		cout << "Bienvenido " << playerUno.getApodo() << "\n";

		///////////////////////////////////////////////////////////////////////////////////////////////// ELECCION BARCO
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
								playerUno.setNombreBarco("Kayuco");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkKayuco");
								playerUno.setDescripcionAtk("Lanza cadaveres al agua");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 1;
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
								playerUno.setNombreBarco("Balsa");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkBalsa");
								playerUno.setDescripcionAtk("Lanzar cantidades ingentes de cocos");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 1;
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
								playerUno.setNombreBarco("Gondola");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkGondola");
								playerUno.setDescripcionAtk("Toca el acordeon y a media cancion lanza su acordeon");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 1;
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
								playerUno.setNombreBarco("Narcolancha");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkNarcolancha");
								playerUno.setDescripcionAtk("Lanza fardos de droga al mar");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 2;
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
								playerUno.setNombreBarco("Galera");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkGalera");
								playerUno.setDescripcionAtk("Catapultar a los esclavos cansados");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 2;
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
								playerUno.setNombreBarco("Drakkar");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkDrakkar");
								playerUno.setDescripcionAtk("Vikingos ebrios de hidromiel lanzan hachas a diestro y siniestro");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 2;
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
								playerUno.setNombreBarco("Buque mercante");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkBuque mercante");
								playerUno.setDescripcionAtk("Lanzamiento de mercancias procedentes de china");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 3;
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
							cout << "\n Crucero de lujo \n \t Descripcion: ";
							cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
							cin >> eleccion;

							if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {
								playerUno.setNombreBarco("Crucero de lujo");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atkCrucero de lujo");
								playerUno.setDescripcionAtk("");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 3;
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
							cout << "\n  \n \t Descripcion: ";
							cout << "\n Escojes este tipo de barco? s/n \n Respuesta: ";
							cin >> eleccion;

							if (eleccion == "s" || eleccion == "S" || eleccion == "si" || eleccion == "SI") {
								playerUno.setNombreBarco("");
								playerUno.setVelocidad(0);
								playerUno.setVidas(1);
								playerUno.setAtk(false);
								playerUno.setNombreAtk("atk");
								playerUno.setDescripcionAtk("");

								playerUnoIniciar = true;
								cat = false;
								tipBarco = false;
								escbarco = false;
								bp = 3;
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
		if (playerUnoIniciar == true)
		{
			// enemigos escojen barco al azar, de la misa categoria donde lo escojio el player
			string nombre;
			bool atk;
			switch (bp)
			{
			case 1:
				// rand para generar un numero del 1 al 3
				// otro switch con todas las opciones
				// dar datos para el enemigo 
				return nombre, atk;

			case 2:

			case 3:

			}


		}
	}
}
////							nombre vel. atk. vida. nombre atk
//Barcos barcoSmall1 = Barcos("Kayuco", 5, false, 1, "atkKayuco");
//Barcos barcoSmall2 = Barcos("Balsa", 5, false, 1, "atkBalsa");
//Barcos barcoSmall3 = Barcos("Gondola", 5, false, 1, "atkGondola");
//Barcos barcoMedium1 = Barcos("Narcolancha", 8, false, 1, "atkNarcolancha");
//Barcos barcoMedium2 = Barcos("Galera", 8, false, 1, "atkGalera");
//Barcos barcoMedium3 = Barcos("Drakkar", 8, false, 1, "atkDrakkar");
//Barcos barcoBig1 = Barcos("Buque mercante", 10, false, 1, "atkBuqueMercante");
//Barcos barcoBig2 = Barcos("Cruzero de lujo", 10, false, 1, "atkCruzeroDeLujo");
//Barcos barcoBig3 = Barcos("Buque de investigacion", 10, false, 1, "atkBuqueDeInvestigacion");