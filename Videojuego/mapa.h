#pragma once
#include"SFML/Graphics.hpp"
#include<iostream>

using namespace sf;
using namespace std;
class Mapa:public RectangleShape
{
private:
	RectangleShape* rectangulo;
public:
	Mapa(Vector2f,Vector2f);
};
