#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Nivel
{
private:
	int nivelActual;
	string dificultadNivel;

public: 

	Nivel();

	void cambiarNivel(int _nivelActual);

	void cambiarDificultad(string _dificultadNivel);

};

