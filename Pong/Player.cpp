#include "Player.h"


Player::Player(Platform* platform,std::string pathImage,int x, int y, float rot)
{
	this->x = x;
	this->y = y;
	this->rot = rot;
	this->pathImage = pathImage;
	this->platform = platform;
}
void Player::init()
{
	image = new Image();
	image->LoadImage(pathImage);
	image->GetTexture();
}

void Player::draw()
{
	platform->RenderImage(image, x, y, rot);
}

void Player::update(int key)
{
	if (key == 'q' || key == 'Q')
	{
		y-=3;
	}
	else if (key == 'a' || key == 'A')
	{
		y+=3;
	}
}