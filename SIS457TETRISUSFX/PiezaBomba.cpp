#include "PiezaBomba.h"

PiezaBomba::PiezaBomba()
{
	radioExplosion = 4.5f;
	tiempoDetonacion = 5;
}

PiezaBomba::PiezaBomba(float _radioExplosion, int _tiempoDetonacion)
{
	radioExplosion = _radioExplosion;
	tiempoDetonacion = _tiempoDetonacion;
}

void PiezaBomba::detonarPiezaBomba(float _radioExplosion)
{
	cout << "Este metodo detona la pieza bomba";
}

void PiezaBomba::incrementarTiempoDetonacion(int _tiempoDetonacion)
{
	cout << "Este metodo incrementa el tiempo para la detonacion";
}
