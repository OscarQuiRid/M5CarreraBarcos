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
//[x] presentacion						-- cambiar presentacion por un banner
//[x] saludar 
//[x] preguntar nombre
//[x] apodo para los enemigos			--rand de una lista de nombres con un switch
//[x]   bucle del juego
//[x]		preguntar que categoria quiere competir	preguntar que barco quiere seleccionar
//[x]		asignar barco a los dos enemigos	
//[x]		comprobar que todos tengan asignado nombre	  
//[x]			bucle for de la carrera
//[x]		        presentacion		-- hola a todos bla bla participantes tal y tal con tal barco, finalizar con un pam gigante (da un string vacio y lo devuelve con todo esto)				
//[]				lanzar 3 dados		-- 3 parametros de entrada, devuelve 3 parametros, contiene 3 rand uno para cada uno, 
//												logica del nitro junto a los dados, si es turno
//													(i del bucle for == 2 lanzar pregunta de si quiere usarlo si es si logica de nitro multiplicando el dado x2)	
//													los enemigos escojeran si usar el nitro en base a un rand 0 false 1 true
//[]				printar dado		-- linea inferior printar los barcos con ~~~~~apodo (tantos ~ como puntos tiene ese jugador)
//				FINAL DEL BUCLE
//[]				print nombre jugador, print banner winner!!!		https://www.creativefabrica.com/es/tools/ascii-art-generator/?text=WINNER%21%21%21%21
//[]			pregunta salir o otra partida
//
//[] crear funcion para simular que los textos se escriben
//


int main() {
	srand(time(NULL));
	Barcos cargador;			// variable para cargar funciones
	Barcos playerUno, enemyUno, enemyDos;
	string eleccion = "", nomBar = "", nomAtk = "", reutilizable = "";
	bool playerUnoIniciar = false, enemyUnoIniciar = false, enemyDosIniciar = false, atk = false, genB = true, Logicajuego = true, juego = false;
	int catBoatPlayer = 0;

////////////////////////////////////////////////////////////////////////////////////////////////////////// INTRO Y APODOS
	cargador.intro();
	cout << "Cual es tu apodo en la carrera?\n";
	cin >> eleccion;
	playerUno.setApodo(eleccion);
	cout << "Bienvenido " << playerUno.getApodo() << "\n";
	cargador.pausaSeiscientos();

	while (Logicajuego == true)
	{
		cargador.apodoEnemigo(eleccion, reutilizable, enemyUnoIniciar, enemyDosIniciar);
		enemyUno.setApodo(eleccion);
		enemyDos.setApodo(eleccion);

		///////////////////////////////////////////////////////////////////////////////////////////////// ELECCION BARCO JUGADOR
		cargador.eleccionBarco(nomBar, nomAtk, playerUnoIniciar, catBoatPlayer);
		playerUno.setNombreBarco(nomBar);
		playerUno.setNombreAtk(nomAtk);

		///////////////////////////////////////////////////////////////////////////////////////////////// ELECCION BARCO ENEMIGO
		cargador.barcoEnemigo(nomBar, nomAtk, catBoatPlayer);
		enemyUno.setNombreBarco(nomBar);
		enemyUno.setNombreAtk(nomAtk);
		cargador.barcoEnemigo(nomBar, nomAtk, catBoatPlayer);
		enemyDos.setNombreBarco(nomBar);
		enemyDos.setNombreAtk(nomAtk);

		///////////////////////////////////////////////////////////////////////////////////////////////// INICIO PARTIDA
		cargador.presentacionCarrera(eleccion, reutilizable);
		cout << eleccion << reutilizable;
		if (playerUnoIniciar == true and enemyUnoIniciar == true and enemyDosIniciar == false)
		{
			for (int turno = 0; turno <= 6; turno++)
			{
				// presentacion de la carrera bla bla linea de meta bla bla nombres y que barcos bla bla y finaliza con un pam de un disparo
				// crear funcion de dado.			
				// crear funcion para calcular.		-- puntos = 0; puntos += dado;
				// mostrar dado, puntos, calcular turno
				// funcion para printar turno		-- string anuncioTurno = "----------------turno"+turno;
				// funcion printar	printar puntos usando un bucle for ejemplo por cada punto sumar un espacio y cabar con apodo
				// crear logica de los atakes en base al nombre del atake -- olvidarme de los nombres de los atakes y de la logica que queria hacer y 
				//				usar nitro con mensajes personalizados en base a nombreBarco 
				//	
			}
		}

			









	}
}

//#include <iostream>
//#include <chrono>   // Para std::chrono::milliseconds
//#include <thread>   // Para std::this_thread::sleep_for
//
//void escribirComoMaquina(const std::string& texto) {
//	for (char c : texto) {
//		std::cout << c << std::flush;  // Imprimir el carácter sin salto de línea y forzar la salida
//		std::this_thread::sleep_for(std::chrono::milliseconds(50));  // Pausa de 50 milisegundos entre cada carácter
//	}
//}
//
//int main() {
//	std::string frase = "¡Hola! Soy una frase simulada escrita por una máquina.";
//
//	std::cout << "Simulando escritura lenta:" << std::endl;
//	escribirComoMaquina(frase);
//
//	std::cout << std::endl;  // Imprimir un salto de línea al final
//
//	return 0;
//}

//cout << "despeus enemy uno:" << endl << "Nombre del Barco: " << enemyUno.getNombreBarco() << endl << "Nombre del Ataque: " << enemyUno.getNombreAtk() << endl << "playerUnoIniciar: " << (playerUnoIniciar ? "true" : "false") << endl << "catBoatPlayer: " << catBoatPlayer << endl;
//cout << "despeus player:" << endl << "Nombre del Barco: " << playerUno.getNombreBarco() << endl << "Nombre del Ataque: " << playerUno.getNombreAtk() << endl << "playerUnoIniciar: " << (playerUnoIniciar ? "true" : "false") << endl << "catBoatPlayer: " << catBoatPlayer << endl;
//cout << "despeus enemy dos:" << endl << "Nombre del Barco: " << enemyDos.getNombreBarco() << endl << "Nombre del Ataque: " << enemyDos.getNombreAtk() << endl << "playerUnoIniciar: " << (playerUnoIniciar ? "true" : "false") << endl << "catBoatPlayer: " << catBoatPlayer << endl;

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