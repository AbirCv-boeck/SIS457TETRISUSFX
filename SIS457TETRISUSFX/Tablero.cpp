#include "Tablero.h"

Tablero::Tablero()
{
	dimensionX = 0.0f;
	dimensionY = 0.0f;
}

Tablero::Tablero(float _dimensionX, float _dimensionY)
{
	dimensionX = _dimensionX;
	dimensionY = _dimensionY;
}

void Tablero::aumentarTama�oTablero(float _dimensionX, float dimensionY)
{
	cout << "Este metodo aumenta el tama�o del tablero";
}

void Tablero::disminuirTama�oTablero(float _dimensionX,float dimensionY)
{
	cout << "Este metodo disminuye el tama�o del tablero";
}
