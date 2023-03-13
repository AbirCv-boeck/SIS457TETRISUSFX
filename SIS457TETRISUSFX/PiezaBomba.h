#pragma once
#include "Pieza.h"

class PiezaBomba
{
private:
	float radioExplosion ;
	int tiempoDetonacion ;

public:
	PiezaBomba();

	PiezaBomba(float _radioExplosion,int _tiempoDetonacion);

	float getRadioExplosion() { return radioExplosion; }

	int getTiempoDetonacion() { return tiempoDetonacion; }

	void detonarPiezaBomba( float _radioExplosion);

	void incrementarTiempoDetonacion(int _tiempoDetonacion);

};

