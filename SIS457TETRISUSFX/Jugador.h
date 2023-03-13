#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Jugador
{
private:
	string nombreJugador;
	int edadJugador;
	int nivelActual;
	int puntuacionTotal;

public:
	Jugador(string _nombreJugador);

	void cambiarNombre(string _nombreJugador);

	void reiniciarCuenta();

};

