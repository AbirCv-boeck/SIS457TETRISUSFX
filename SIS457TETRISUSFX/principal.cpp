#include <iostream>
#include "Pieza.h"
#include "PiezaMutante.h"
#include "PiezaFlotante.h"
#include "PiezaBomba.h"
#include "Jugador.h"
#include "Menu.h"
#include "Tablero.h"
#include "Nivel.h"
#include "Puntaje.h"
#include "Temporizador.h"

using namespace std;

int main() {

	/*Pieza pieza_l("eles", "#000000");

	cout << pieza_l.getNombre() << endl;
	pieza_l.setNombre("L de cuatro tiles");
	pieza_l.rotar(90);
	cout << pieza_l.getNombre() << endl;
	cout << pieza_l.getColor() << endl;
	cout << "--------------------------" << endl;

	PiezaMutante pieza_m("Pieza mutante sin nombre, jjejejejej", "#OOOOOO transparente", 2, true);

	cout << "numero de copias: " << pieza_m.getNumeroCopias() << endl;
	cout << "modificar forma?: " << pieza_m.getModificarForma() << endl;
	cout << "color de la pieza mutante" << pieza_m.getColor() << endl;
	cout << pieza_m.getNombre() << endl;
	pieza_m.setNombre("Pieza mutante L de cuatro tiles");
	pieza_m.rotar(90);
	cout << pieza_m.getNombre() << endl;

	pieza_m.cambiarForma(2);
	*/

	Jugador J1("Jose");

	J1.cambiarNombre("juan");

	Menu M1();
    
	Tablero T1();

	Nivel N1();

	Puntaje p1();

	Temporizador TEMP1();

	PiezaMutante PM1(3,true);

	PM1.copiarPieza(3);

	PiezaFlotante PF1(5, false);

	PF1.flotarPieza(true);

	PiezaBomba PB1(3.0F,4);

	PB1.detonarPiezaBomba(false);









}