#include "Fantasmas.h"

Fantasmas::Fantasmas():Sprite()
{
	texturapinha.loadFromFile("pin.png");
	this->setTexture(texturapinha);
	this->velocidad.x = 300.f;
	this->velocidad.y = 300.f;
	this->setScale(40.f / this->getTexture()->getSize().x, 28.f / this->getTexture()->getSize().y);
}
