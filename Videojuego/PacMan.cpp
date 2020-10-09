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
	//float top = this->getGlobalBounds().top;
	//float bottom = this->getGlobalBounds().top + this->getGlobalBounds().height;

	//// Movemos la pala en función de las teclas pulsada
	//// comprobando no salirnos de la pantalla
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && top > 0)
	//	this->move(x, y--);
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) )
	//	this->move(x,delta.asSeconds() * speed);
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && top > 0)
	//	this->move(x, -delta.asSeconds() * velocidad.y);
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) )
	//	this->move(x,delta.asSeconds() * velocidad.y);
	float left = this->getPosition().x - this->getOrigin().x;
	float right = this->getPosition().x + this->getOrigin().x;
	float top = this->getPosition().y - this->getOrigin().y;
	float bottom = this->getPosition().y + this->getOrigin().y;
	y = 300;
	x = 300;
	// Comprobamos si choca contra las paredes
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		this->move(0, -delta.asSeconds() * y);
		this->setRotation(-90.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		this->move(0, delta.asSeconds() * y);
		this->setRotation(90.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		this->move(-delta.asSeconds() * y, 0);
		this->setRotation(-180.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
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

