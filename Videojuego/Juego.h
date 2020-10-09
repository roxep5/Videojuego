#pragma once
#include"SFML/Graphics.hpp"
#include<iostream>
#include "PacMan.h"
#include "Fantasmas.h"

using namespace sf;
using namespace std;
class Juego
{
private:
	RenderWindow * ventana1;
	Texture textura2;
	PacMan pacman;
	Fantasmas Fantasma1;
	Sprite* background;
	Event* evento1;
	int fps;
public:
	Juego(int resolucion_X, int resolucion_y, string titulo);
	void dibujar();
	void getLoop();
	void procesar_Eventos();
};

