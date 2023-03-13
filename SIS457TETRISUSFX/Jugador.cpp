#include "Jugador.h"

Jugador::Jugador(string _nombreJugador)
{
	nombreJugador = _nombreJugador;
	edadJugador = 0;
	nivelActual = 0;
	puntuacionTotal = 0;
}

void Jugador::cambiarNombre(string _nombreJugador)
{
	cout << "Este metodo cambia el nombre del jugador";
}

void Jugador::reiniciarCuenta()
{
	cout << "Este metodo reinicia el estado de la cuenta del jugador";
}


