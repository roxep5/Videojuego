#pragma once
#include"SFML/Graphics.hpp"
#include<iostream>
#include "PacMan.h"
#include "Fantasmas.h"
#include "mapa.h"

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
	Mapa* rectangulo;
	Mapa* rectangulo2;
	Mapa* rectangulo3;
	Mapa* rectangulo4;
	Mapa* rectangulo5;
	Mapa* rectangulo6;
	Mapa* rectangulo7;
	Mapa* rectangulo8;
	Mapa* rectangulo9;
	Mapa* rectangulo10;
	Mapa* rectangulo11;	
	Mapa* rectangulo12;
	Mapa* rectangulo13;
	Mapa* rectangulo14;
	Mapa* rectangulo15;
	Mapa* rectangulo16;
	Mapa* rectangulo17;
	Mapa* rectangulo18;
	Mapa* rectangulo19;
	Mapa* rectangulo20;
	Mapa* rectangulo21;
	int fps;
public:
	Juego(int resolucion_X, int resolucion_y, string titulo);
	void dibujar();
	void getLoop();
	void procesar_Eventos();
};

