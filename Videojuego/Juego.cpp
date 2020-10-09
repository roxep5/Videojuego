#include "Juego.h"

Juego::Juego(int resolucion_X, int resolucion_y, string titulo)
{	
	fps = 60;
	ventana1 = new RenderWindow(VideoMode(resolucion_X, resolucion_y, 32), titulo);
	ventana1->setFramerateLimit(60);
	Vector2f vec;
	vec.x = 430;
	vec.y = 270;//crear constructor en fantasma para decir donde empieza
	Fantasma1.setPosition(vec);
	vec.x = 400;
	Fantasma2.setPosition(vec);
	vec.x = 370;
	Fantasma3.setPosition(vec);
	vec.x = 340;
	Fantasma4.setPosition(vec);

	//sprite1 = new Sprite;
	//+9sprite2 = new Sprite;;
	textura2.loadFromFile("mapa.png");
	//sprite2->setTexture(textura2);
	/*sprite2->setTexture(textura1);
	sprite2->setPosition(300, 400);
	sprite2->setOrigin(sprite2->getTexture()->getSize().x / 2.f, sprite2->getTexture()->getSize().y / 2.f);*/
	//sprite1->setColor(Color::Blue);
	//Color color(100, 100, 200);//rgb
	//Color color2(100, 100, 200,100);//rgba
	//	sprite1->setColor(color2);
	//sprite2->setRotation(90);
	//sprite2->setScale(100.f / sprite2->getTexture()->getSize().x, 100.f / sprite2->getTexture()->getSize().y);//dimension deseada o tamaño dividido en tamaño actual
	//sprite1->setScale(50.f/ sprite1->getTexture()->getSize().x, 35.f / sprite1->getTexture()->getSize().y);//dimension deseada o tamaño dividido en tamaño actual
	//sprite2->setScale(800.f/ sprite2->getTexture()->getSize().x, 600.f / sprite2->getTexture()->getSize().y);//dimension deseada o tamaño dividido en tamaño actual
	evento1 = new Event;
	background=new Sprite(textura2);
	background->setScale(800.f / background->getTexture()->getSize().x, 600.f / background->getTexture()->getSize().y);
	getLoop();

	
}

void Juego::dibujar()
{
	ventana1->clear();
	
	ventana1->draw(*background);
	ventana1->draw(Fantasma1);
	ventana1->draw(Fantasma2);
	ventana1->draw(Fantasma3);
	ventana1->draw(Fantasma4);
	ventana1->draw(pacman);
	ventana1->display();
}

void Juego::getLoop() {
	while (ventana1->isOpen()) {

		time = clock.restart();
		procesar_Eventos();
		
		//sprite2->setRotation(sprite2->getRotation()+3);
		pacman.update(time);
		dibujar();
	}
}

void Juego::procesar_Eventos()
{
	while (ventana1->pollEvent(*evento1)) {
		switch (evento1->type) {
		case Event::Closed:
			ventana1->close();
			exit(1);
			break;
		}
	}
}
