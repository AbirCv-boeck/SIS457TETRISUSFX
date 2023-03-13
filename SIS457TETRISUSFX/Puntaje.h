#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Puntaje
{
private:
	int puntuacion;
	float dimensionX;
	float dimensionY;

public:

	Puntaje();

	void aumentarPuntaje(int _puntuacion);

	void disminuirPuntaje(int _puntuacion);
};

