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

void Tablero::aumentarTamaņoTablero(float _dimensionX, float dimensionY)
{
	cout << "Este metodo aumenta el tamaņo del tablero";
}

void Tablero::disminuirTamaņoTablero(float _dimensionX,float dimensionY)
{
	cout << "Este metodo disminuye el tamaņo del tablero";
}
