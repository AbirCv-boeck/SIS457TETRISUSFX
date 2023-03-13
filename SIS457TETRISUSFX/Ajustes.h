#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std; 

class Ajustes
{
private:
	string nivelDificultad; 
	string modoJuego;
	string idioma;
public:

	Ajustes();

	void continuarJuego();

	void salirMenu();


};

