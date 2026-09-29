#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Mariposa.h"
#include "Escarabajo.h"

using namespace std;
using namespace System;

void mariposita(int x, int y)
{
	string lineas[16] = {
 "    _               _",
 "   (o\\             /o)",
 "   /::\\  o     o  /::\\",
 "  /:'':\\  \___/  /:'':\\",
 " /:'  ':\\/6 . 6\/:'  ':\\",
 "(o:.   '(  ._.  )'   .:o)      _.-'''-.",
 " `\\:.    \     /    .:/`     .'        '.",
 "   `\\:.  /`---'\  .:/`       :           :",
 "     `)://`===`\\:(`          '.        .'",
 "     /:(/\\-===-/\\):\\            '.    .'",
 "    /:'.,/ /^\\ \\,.':\\             '..'",
 "   /:.:/(_/   \\_)\\:.:\\            .''._",
 "  (::/`     :     `\\::)         .'     `-....-'`",
 "   \o)       '.    (o/        .'",
 "    ^          '.   ^       .'",
 "                 `'''''''''`"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];
	Console::SetCursorPosition(x, y + 9);
	cout << lineas[9];
	Console::SetCursorPosition(x, y + 10);
	cout << lineas[10];
	Console::SetCursorPosition(x, y + 11);
	cout << lineas[11];
	Console::SetCursorPosition(x, y + 12);
	cout << lineas[12];
	Console::SetCursorPosition(x, y + 13);
	cout << lineas[13];
	Console::SetCursorPosition(x, y + 14);
	cout << lineas[14];
	Console::SetCursorPosition(x, y + 15);
	cout << lineas[15];
}

void escarabajito(int x, int y)
{
	string lineas[15] = {
"       ,_    /) (\\    _,",
"        >>  <<,_,>>  <<",
"       //   _0.-.0_   \\\\",
"       \\'._/       \\_.'/",
"        '-.\\.--.--./.-'",
"        __/ : :Y: : \\ _",
"';,  .-(_| : : | : : |_)-.  ,:'",
"  \\\\ / .'  |: : :|: : :|  `.\\//",
"   (/    |: : :|: : :|    \\)",
"         |: : :|: : :;",
"        /\\\\ : : | : : /\\\\",
"       (_/'.: :.: :.'\\_)",
"        \\\\  `""`""`  //",
"         \\\\         //",
"          ':.     .:'"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];
	Console::SetCursorPosition(x, y + 9);
	cout << lineas[9];
	Console::SetCursorPosition(x, y + 10);
	cout << lineas[10];
	Console::SetCursorPosition(x, y + 11);
	cout << lineas[11];
	Console::SetCursorPosition(x, y + 12);
	cout << lineas[12];
	Console::SetCursorPosition(x, y + 13);
	cout << lineas[13];
	Console::SetCursorPosition(x, y + 14);
	cout << lineas[14];

}

void mover_cursor(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{

	int opcion;

	//Creando los objetos Mariposa y Escarabajo

	Mariposa mariposa("Danaus plexippus", 6, "naranja y negro", 10.5, "nectar");
	Escarabajo escarabajo("Coccinella septempunctata", 6, "rojo con puntos negros", "Coccinellidae", true);

	do
	{
		system("cls");

		SetConsoleOutputCP(65001);

		cout << "█▀▀▀▀█ █▀▀▀▀▀▀▀▀▀▄  █▀▀▀▀▀▀▀▀▀▀▓  ▄▀▀▀▀▀▀▀▀▀█  ▄▀▀▀▀▀▀▀▀▀█ █▀▀▀▀▀▀▀▀▀▀█  ▄▀▀▀▀▀▀▀▀▄ " << endl;
		cout << "▀    ▓ ▀    ▄▄    █ ▀    ▄▄▄ ∙ ▒ █·   ▄▄▄▄▄▄█ █·   ▄▄▄▄▄▄█ █▄▄▄·   ▄▄▄█ ▀    ▄▄ .  █" << endl;
		cout << "▓    ▓ ▓    ▓ ▌   ▓ ▓    ▓ ▀▀▀▀▀ ▓  . ▓▄▄▄▄▄▄ ▓  . ▓          ▓  . ▓    ▓    ▓ ▌   ▓" << endl;
		cout << "▒   ·▒ ▒    ▒ ▒ · ▒ ░▄▄▄ ▀▀▀▀▀▀▒ ▒ ∙  ▄▄▄▄▄▄▒ ▒ ∙  ▒          ▒ ∙  ▒    ▒  · ▒ ▓   ▒" << endl;
		cout << "░ .  ░ ░   ∙░ ░   ░ ▄▄▄▄▄  ▒  .░ ░    ░▄▄▄▄▄▄ ░    ░▄▄▄▄▄▄    ░    ░    ░    ░▄░·. ░" << endl;
		cout << "█    █ █ ∙  █ █   █ ▓   ▀▀▀▀∙  █ █    .    ·█ █    .    ·█    █    █    █   .      █" << endl;
		cout << "█▄▄▄▄█ █▄▄▄▄█ █▄▄▄█ ░▄▄▄▄▄▄▄▄▄▄█ █▄▄▄▄▄▄▄▄▄▄█ █▄▄▄▄▄▄▄▄▄▄█    █▄▄▄▄█     ▀▄▄▄▄▄▄▄▄▀" << endl;

		SetConsoleOutputCP(437);

		cout << " " << endl;

		cout << "1. Datos de la mariposa" << endl;
		cout << "2. Datos del escarabajo" << endl;
		cout << "3. Salir" << endl;

		cout << "Escoge una opcion: ";
		cin >> opcion;

		if (opcion == 1)
		{
			system("cls");

			mariposa.mostrar_datos();
			
			mariposita(43, 10);

			mover_cursor(0, 27);

			system("pause");
		}

		else if (opcion == 2)
		{
			system("cls");

			escarabajo.mostrar_datos();

			escarabajito(63, 10);

			mover_cursor(0, 26);

			system("pause");
		}

		else
		{
			cout << "Cerrando el programa" << endl;

			system("pause");
		}
	}

	while (opcion != 3);

	_getch();
	return 0;
}