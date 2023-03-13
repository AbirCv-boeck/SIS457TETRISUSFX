#include "Menu.h"

Menu::Menu()
{
	onMenu = false;
	opcionSeleccionada = "";
}

void Menu::menuIniciado(bool _onMenu)
{
	cout << "Este metodo inicia el menu";
}

void Menu::seleccionarOpcion(string _opcionSeleccionada)
{
	cout << "Este metodo selecciona una de las opciones";
}
