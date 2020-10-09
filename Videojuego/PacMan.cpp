#include "PacMan.h"

PacMan::PacMan() :sf::Sprite()
{
	texturapc.loadFromFile("pacman.png");
	this->setTexture(texturapc);
	this->velocidad.x = 300.f;
	this->velocidad.y = 300.f;
	this->setScale(37.f / this->getTexture()->getSize().x, 30.f / this->getTexture()->getSize().y);
	this->setPosition(40, 40);
}

void PacMan::dibujar()
{

}

void PacMan::update(Time& delta)
{
}
