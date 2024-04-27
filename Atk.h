#pragma once
#include<iostream>

using namespace std;

class Atk
{
private:
	string nombreAtk;			// nombre del atk
	string descripcion;			// descripcion de la que consiste el atk
	bool agresivo;				// atacaras al enemigo para conseguir reducir su velocidad
	bool defensivo;				// conseguiras velocidad defensa para lograr distanciarte o que tu rival no te atake 

public:
	Atk();
	Atk(string pNombreAtk, string pDescripcion,bool pAgresivo, bool pDefensivo);
};