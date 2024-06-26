#include "Barcos.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>
#include <string>




using namespace std;
//ordenar ctr+k >> ctr+d/f
//comentar ctr+k >> ctr+c/u
//ctr

 //turno 0
	// tiro dado
	// sumo puntos
 //turno 1
	// tiro dado
	// sumo puntos
 //turno 2
	// tiro dado
	// pregunta nitro
	// sumo puntos
 //turno 3
	// tiro dado
	// pregunta nitro si no se a usado
	// sumo puntos
 //turno 4
	// tiro dado
	// pregunta nitro si no se a usado
	// sumo puntos
 //turno 5
	// tiro dado
	// pregunta nitro o pregunta nitro si no se a usado
	// sumo puntos

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
//[x]				mostrar dado		-- meustra el resultado de los dados de los 3 jugadores				
//[x]				lanzar 3 dados		-- 3 parametros de entrada, devuelve 3 parametros, contiene 3 rand uno para cada uno, 
//												logica del nitro junto a los dados, si es turno
//													(i del bucle for == 2 lanzar pregunta de si quiere usarlo si es si logica de nitro multiplicando el dado x2)	
//													los enemigos escojeran si usar el nitro en base a un rand 0 false 1 true
//[x]				calcular puntos
//[]				printar carrera		-- linea inferior printar los barcos con ~~~~~apodo (tantos ~ como puntos tiene ese jugador)
//				FINAL DEL BUCLE
//[]				print nombre jugador, print banner winner!!!		https://www.creativefabrica.com/es/tools/ascii-art-generator/?text=WINNER%21%21%21%21
//[]			pregunta salir o otra partida
//
//[?] crear funcion para simular que los textos se escriben
//

int main() {
	srand(time(NULL));

	int maxRondas = 6;

	Barcos cargador;			// variable para cargar funciones
	Barcos playerUno, enemyUno, enemyDos;
	string eleccion = "", reutilizable = "", reutilizableDos = "", reutilizableTres = "";
	bool playerUnoIniciar = false, enemyUnoIniciar = false, enemyDosIniciar = false, juego = true;
	int catBoatPlayer = 0, reciclable = 0, reciclableUno = 0, reciclableDos = 0, turnoPlayer = 0, turnoEnemyUno = 0, turnoEnemyDos = 0, pntPlayer = 0, pntEnemyUno = 0, pntEnemyDos = 0;	// cambiar turnos y puntos por arrays

	////////////////////////////////////////////////////////////////////////////////////////////////////////// INTRO Y APODOS
	cargador.intro();
	cout << "Cual es tu apodo en la carrera?\n";
	cin >> eleccion;
	playerUno.setApodo(eleccion);
	cout << "Bienvenido " << playerUno.getApodo() << "\n";
	cargador.pausaSeiscientos();

	while (juego == true)
	{
		cargador.apodoEnemigo(eleccion, reutilizable, enemyUnoIniciar, enemyDosIniciar);
		enemyUno.setApodo(eleccion);
		enemyDos.setApodo(reutilizable);

		///////////////////////////////////////////////////////////////////////////////////////////////// ELECCION BARCO JUGADOR
		cargador.eleccionBarco(reutilizableDos, playerUnoIniciar, catBoatPlayer);
		playerUno.setNombreBarco(reutilizableDos);

		///////////////////////////////////////////////////////////////////////////////////////////////// ELECCION BARCO ENEMIGO
		cargador.barcoEnemigo(reutilizableDos, catBoatPlayer);
		enemyUno.setNombreBarco(reutilizableDos);
		cargador.barcoEnemigo(reutilizableDos, catBoatPlayer);
		enemyDos.setNombreBarco(reutilizableDos);

		///////////////////////////////////////////////////////////////////////////////////////////////// INICIO PARTIDA
		cargador.presentacionCarrera(eleccion, reutilizable);
		cout << eleccion << reutilizable;
		if (playerUnoIniciar == true and enemyUnoIniciar == true and enemyDosIniciar == true)
		{
			playerUno.setTurno(0), enemyUno.setTurno(0), enemyDos.setTurno(0);
			reutilizable = playerUno.getApodo(), reutilizableDos = enemyUno.getApodo(), reutilizableTres = enemyDos.getApodo();

			for (int vuelta = 0; vuelta <= maxRondas; vuelta++)
			{	
				// lanzar 3 dados
				cargador.dice(reciclable, reciclableUno, reciclableDos);
				cout << playerUno.getApodo() << " tira el dado y le sale: " << reciclable << "\n";
				cout << enemyUno.getApodo() << " tira el dado y le sale: " << reciclableUno << "\n";
				cout << enemyDos.getApodo() << " tira el dado y le sale: " << reciclableDos << "\n";

				// pregunta nitro
				cargador.nitro(turnoPlayer, turnoEnemyUno, turnoEnemyDos, reciclable, reciclableUno, reciclableDos, reutilizable, reutilizableDos, reutilizableTres);

				// calcular puntos
				cargador.puntosPlayer(pntPlayer, reciclable);
				cargador.puntosEnemyUno(pntEnemyUno, reciclableUno);
				cargador.puntosEnemyDos(pntEnemyDos, reciclableDos);

				// asignar puntos
				playerUno.setPuntos(pntPlayer);
				enemyUno.setPuntos(pntEnemyUno);
				enemyDos.setPuntos(pntEnemyDos);
				// print puntos
				cargador.printCarrera(playerUno.getPuntos(), enemyUno.getPuntos(), enemyDos.getPuntos(), reutilizable, reutilizableDos, reutilizableTres);

				// asignar turno
				turnoPlayer++, turnoEnemyUno++, turnoEnemyDos++;
			}
			cargador.printGanador(playerUno.getPuntos(), enemyUno.getPuntos(), enemyDos.getPuntos(), reutilizable, reutilizableDos, reutilizableTres);
			cargador.salirJuego(juego);

		}
	}
	cout << "\n Gracias po jugar!! Hasta la proxima!! \n";
}

//#include <iostream>
//#include <chrono>   // Para std::chrono::milliseconds
//#include <thread>   // Para std::this_thread::sleep_for
//
//void escribirComoMaquina(const std::string& texto) {
//	for (char c : texto) {
//		std::cout << c << std::flush;  // Imprimir el car�cter sin salto de l�nea y forzar la salida
//		std::this_thread::sleep_for(std::chrono::milliseconds(50));  // Pausa de 50 milisegundos entre cada car�cter
//	}
//}
//
//int main() {
//	std::string frase = "�Hola! Soy una frase simulada escrita por una m�quina.";
//
//	std::cout << "Simulando escritura lenta:" << std::endl;
//	escribirComoMaquina(frase);
//
//	std::cout << std::endl;  // Imprimir un salto de l�nea al final
//
//	return 0;
//}