#include "PacMan.h"

PacMan::PacMan() :sf::Sprite()
{
	texturapc.loadFromFile("pacman.png");
	this->setTexture(texturapc);
	//this->velocidad = 300.f;
	x = 40;
	y = 40;
	velocidad.x = x;
	velocidad.y = y;
	this->setScale(37.f / this->getTexture()->getSize().x, 30.f / this->getTexture()->getSize().y);
	this->setPosition(40, 40);
	this->setOrigin(this->getTexture()->getSize().x/2.f,this->getTexture()->getSize().y/2.f);

}


void PacMan::update(Time& delta)
{

	float top = this->getGlobalBounds().top;
	float bottom = this->getGlobalBounds().top + this->getGlobalBounds().height;
	float izq = this->getGlobalBounds().left;
	float drc = this->getGlobalBounds().left + this->getGlobalBounds().width;
	y = 300;
	x = 300;
	// Comprobamos si choca contra las paredes
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)&&top>20) {
		this->move(0, -delta.asSeconds() * y);
		this->setRotation(-90.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)&&bottom <580 ) {
		this->move(0, delta.asSeconds() * y);
		this->setRotation(90.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)&&izq>20) {
		this->move(-delta.asSeconds() * y, 0);
		this->setRotation(-180.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)&& drc < 780){
		this->move(delta.asSeconds() * x, 0);
		this->setRotation(0.f);
}
	
	/*if (right >= WIDTH && speed.x > 0)
	{
		this->speed.x *= -1;
		this->sound.play();
	}
	if ((top <= 0 && speed.y < 0) || (bottom >= HEIGHT && speed.y > 0))
	{
		this->speed.y *= -1;
		this->sound.play();
	}*/
}

