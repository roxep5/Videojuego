#pragma once
#include"SFML/Graphics.hpp"
#include<iostream>

using namespace sf;
using namespace std;
class Fantasmas : public Sprite
{
private:
	Texture texturapinha;
	Vector2f velocidad;
public:
	Fantasmas();
};

