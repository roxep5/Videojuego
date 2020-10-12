#pragma once
#include"SFML/Graphics.hpp"
#include<iostream>
#include "PacMan.h"
#include "Fantasmas.h"
#include "mapa.h"
#include<List>

using namespace sf;
using namespace std;
class Juego
{
private:
	Clock clock;
	Time time;
	RenderWindow * ventana1;
	Texture textura2;
	PacMan pacman;;
	Fantasmas Fantasma1;
	Fantasmas Fantasma2;
	Fantasmas Fantasma3;
	Fantasmas Fantasma4;
	Sprite* background;
	Event* evento1;
	Mapa* rectangulo[100];
	int fps;
public:
	Juego(int resolucion_X, int resolucion_y, string titulo);
	void dibujar();
	void getLoop();
	void procesar_Eventos();
};

