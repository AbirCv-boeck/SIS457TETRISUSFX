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

void Tablero::aumentarTamañoTablero(float _dimensionX, float dimensionY)
{
	cout << "Este metodo aumenta el tamaño del tablero";
}

void Tablero::disminuirTamañoTablero(float _dimensionX,float dimensionY)
{
	cout << "Este metodo disminuye el tamaño del tablero";
}
