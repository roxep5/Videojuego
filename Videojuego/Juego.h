#pragma once
#include"SFML/Graphics.hpp"
#include<iostream>

using namespace sf;
using namespace std;
class Juego
{
private:
	RenderWindow * ventana1;
	Texture textura1;
	Texture textura2;
	Sprite* sprite1;
	Sprite* sprite2;
	Event* evento1;
	int fps;
public:
	Juego(int, int, string);
	void dibujar();
	void getLoop();
	void procesar_Eventos();
};

