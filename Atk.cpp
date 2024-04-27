#include "Atk.h"
Atk::Atk() {
	nombreAtk = "";
	descripcion = "";
	agresivo = false;
	defensivo = false;

}
Atk::Atk(string pNombreAtk, string pDescripcion, bool pAgresivo, bool pDefensivo) {
	nombreAtk = pNombreAtk;
	descripcion = pDescripcion;
	agresivo = pAgresivo;
	defensivo = pDefensivo;

}