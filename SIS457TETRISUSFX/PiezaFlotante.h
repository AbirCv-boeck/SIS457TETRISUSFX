#pragma once
#include "Pieza.h"
class PiezaFlotante :
    public Pieza
{
private:
    int tiempoFlotacion;
    bool onFlotacion=false;

public:
    PiezaFlotante(int _tiempoFlotacion,bool _onFlotacion);

    int getTiempoFlotacion() { return tiempoFlotacion; }

    bool getOnFlotacion() { return onFlotacion; }

    void flotarPieza(bool _onFlotacion);

    void incrementarTiempoFlotacion(int _tiempoFlotacion);


};

