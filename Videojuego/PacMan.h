#include"SFML/Graphics.hpp"
#include<iostream>

using namespace sf;
using namespace std;
class PacMan : public Sprite
{
private:
	Texture texturapc;
	Vector2f velocidad;
public:
	PacMan();
	void dibujar();
	void update(Time& delta);
};

