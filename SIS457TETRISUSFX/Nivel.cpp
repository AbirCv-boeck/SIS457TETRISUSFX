#include "Nivel.h"

Nivel::Nivel()
{
	nivelActual = 0;
	dificultadNivel = "Easy";
}

void Nivel::cambiarNivel(int _nivelActual)
{
	cout << "Este metodo cambia el nivel actual";
}

void Nivel::cambiarDificultad(string _dificultadNivel)
{
	cout << "Este metodo cambia la dificultad del nivel";
}
