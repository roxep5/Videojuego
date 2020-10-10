#include "mapa.h"

Mapa::Mapa(Vector2f tamano,Vector2f posicion):RectangleShape(tamano)
{
	this->setFillColor(Color::Blue);
	this->setPosition(posicion.x, posicion.y);
}
