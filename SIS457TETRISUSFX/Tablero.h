#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Tablero
{
private:
	float dimensionX;
	float dimensionY;
	string colorTablero;

public:
	Tablero();

	Tablero(float _dimensionX,float _dimensionY);

	void aumentarTamaņoTablero(float _dimensionX, float dimensionY);

	void disminuirTamaņoTablero(float _dimensionX, float dimensionY);
	
};

