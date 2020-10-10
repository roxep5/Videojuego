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
	//esquinas
	rectangulo =new Mapa(Vector2f(800.f, 20.f),Vector2f(0,0));
	rectangulo2 = new Mapa(sf::Vector2f(20.f, 600.f), Vector2f(0, 0));
	rectangulo3 = new Mapa(sf::Vector2f(800.f, 20.f),Vector2f(0, 580));
	rectangulo4 =new Mapa(sf::Vector2f(20.f, 600.f),Vector2f(780, 0));
	//cuadrados superiores
	rectangulo5 =new Mapa(sf::Vector2f(88.f, 38.f), Vector2f(80, 56));
	rectangulo6 = new Mapa(sf::Vector2f(110.f, 38.f), Vector2f(220, 56));
	rectangulo7 = new Mapa(sf::Vector2f(110.f, 38.f), Vector2f(469, 56));
	rectangulo8 = new Mapa(sf::Vector2f(88.f, 38.f), Vector2f(634, 56));
	//segunda fila de cuadrados
	rectangulo9 = new Mapa(sf::Vector2f(88.f, 20.f), Vector2f(80, 130));
	rectangulo10 = new Mapa(sf::Vector2f(88.f, 20.f), Vector2f(634, 130));
	//cuadrados del medio
	rectangulo11 = new Mapa(sf::Vector2f(169.f, 195.f), Vector2f(0, 189));
	rectangulo12 = new Mapa(sf::Vector2f(169.f, 195.f), Vector2f(631, 189));
	//Ts del medio
	rectangulo13 = new Mapa(sf::Vector2f(35.f, 75.f), Vector2f(381, 20));
	rectangulo14 = new Mapa(sf::Vector2f(194.f, 23.f), Vector2f(305, 127));
	rectangulo15 = new Mapa(sf::Vector2f(35.f, 60.f), Vector2f(381, 150));
	rectangulo16 = new Mapa(sf::Vector2f(194.f, 23.f), Vector2f(305, 356));
	rectangulo17 = new Mapa(sf::Vector2f(35.f, 50.f), Vector2f(381, 378));
	rectangulo18 = new Mapa(sf::Vector2f(194.f, 23.f), Vector2f(305, 467));
	rectangulo19 = new Mapa(sf::Vector2f(35.f, 60.f), Vector2f(381, 489));
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
	ventana1->draw(*rectangulo);
	ventana1->draw(*rectangulo2);
	ventana1->draw(*rectangulo3);
	ventana1->draw(*rectangulo4);
	ventana1->draw(*rectangulo5);
	ventana1->draw(*rectangulo6);
	ventana1->draw(*rectangulo7);
	ventana1->draw(*rectangulo8);
	ventana1->draw(*rectangulo9);
	ventana1->draw(*rectangulo10);
	ventana1->draw(*rectangulo11);
	ventana1->draw(*rectangulo12);
	ventana1->draw(*rectangulo13);
	ventana1->draw(*rectangulo14);
	ventana1->draw(*rectangulo15);
	ventana1->draw(*rectangulo16);
	ventana1->draw(*rectangulo17);
	ventana1->draw(*rectangulo18);
	ventana1->draw(*rectangulo19);
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
