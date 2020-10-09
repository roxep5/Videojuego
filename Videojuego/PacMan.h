#include"SFML/Graphics.hpp"
#include<iostream>

using namespace sf;
using namespace std;
class PacMan : public Sprite
{
private:
	int x;
	int y;
	Texture texturapc;
	Vector2f velocidad;
public:
	PacMan();
	//void update();
	void update(Time& delta);
};

