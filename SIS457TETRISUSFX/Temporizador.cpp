#include "Temporizador.h"

Temporizador::Temporizador()
{
	tiempoTemporizador = 0;
	onTemporizador = false;
}

void Temporizador::iniciarTemporizador(bool _onTemporizador)
{
	cout << "Este metodo inicia el conteo";
}

void Temporizador::aumentarTiempoTemp(int tiempoTemporizador)
{
	cout << "Este metodo aumneta el tiempo del temporizador";
}

void Temporizador::disminuirTiempoTemp(int tiempoTemporizador)
{
	cout << "Este metodo disminuye el tiempo del temporizador";
}
