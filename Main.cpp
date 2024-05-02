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
//[] apodo para los enemigos rand de una lista de nombres con un switch
//[]   bucle del juego
//[x]	 preguntar que categoria quiere competir
//[x]		preguntar que barco quiere seleccionar
//[]		  asignar barco a los dos enemigos 
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
	Barcos cargador;			// variable para cargar funciones
	Barcos playerUno, enemyUno, enemyDos;
	string eleccion = "", nomBar = "", nomAtk = "";
	bool playerUnoIniciar = false, enemyIniciar = false, atk = false;
	int catBoatPlayer = 0;

	bool juego = true;
	while (juego == true)
	{
		///////////////////////////////////////////////////////////////////////////////////////////////// INTRO Y APODO AL JUEGO
		cargador.introApodo(playerUno);
		cout << "Cual es tu apodo en la carrera?\n";
		cin >> eleccion;
		playerUno.setApodo(eleccion);
		cout << "Bienvenido " << playerUno.getApodo() << "\n";
		// funcion rand para escojer el nombre del enemigo
		
		///////////////////////////////////////////////////////////////////////////////////////////////// ELECCION BARCO JUGADOR
		cargador.eleccionBarco(nomBar, nomAtk, playerUnoIniciar, catBoatPlayer);
		// iniciar el barco del player (todos los parametros


		///////////////////////////////////////////////////////////////////////////////////////////////// ELECCION BARCO ENEMIGO
		if (playerUnoIniciar == true)
		{

			cout << "antes de llamar a barcoEnemigo:" << endl << "Nombre del Barco: " << nomBar << endl << "Nombre del Ataque: " << nomAtk << endl << "playerUnoIniciar: " << (playerUnoIniciar ? "true" : "false") << endl << "catBoatPlayer: " << catBoatPlayer << endl;

			cargador.barcoEnemigo(nomBar, nomAtk, playerUnoIniciar, enemyIniciar, catBoatPlayer);

			cout << "Despues de llamar a barcoEnemigo:" << endl << "Nombre del Barco: " << nomBar << endl << "Nombre del Ataque: " << nomAtk << endl << "playerUnoIniciar: " << (playerUnoIniciar ? "true" : "false") << endl << "catBoatPlayer: " << catBoatPlayer << endl;

			// cargar todo a enemyUno
			// if que si el player y el rival son true entrar a la funcion
			// reiniciar ese boolean a false
			// volver a llamar a la funcion
			// cargar todo a enemyDos
			// si la funcion iniciar la carrera 
			if (enemyIniciar == true)
			{

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