#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Menu
{
private:
	bool onMenu;
	string opcionSeleccionada;
	vector<string> menu {"iniciar","nivel","opciones","salir"};

public:
	Menu();

	void menuIniciado(bool _onMenu);

	void seleccionarOpcion(string _opcionSeleccionada);
};

