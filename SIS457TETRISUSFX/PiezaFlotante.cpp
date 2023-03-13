#include "PiezaFlotante.h"

PiezaFlotante::PiezaFlotante(int _tiempoFlotacion, bool _onFlotacion)
{
	_tiempoFlotacion = tiempoFlotacion;
	_onFlotacion = onFlotacion;
}

void PiezaFlotante::flotarPieza(bool _onFlotacion)
{
	cout << "Este metodo permite que la pieza flote";
}

void PiezaFlotante::incrementarTiempoFlotacion(int _tiempoFlotacion)
{
	cout << "Este metodo permite que se incremente el tiempo de flotacion de la pieza";
}
