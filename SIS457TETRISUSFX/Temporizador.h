#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Temporizador
{
private:
	int tiempoTemporizador;
	bool onTemporizador;

public:

	Temporizador();


	void iniciarTemporizador(bool _onTemporizador);

	void aumentarTiempoTemp(int tiempoTemporizador);

	void disminuirTiempoTemp(int tiempoTemporizador);
};

