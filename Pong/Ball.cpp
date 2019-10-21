#include "Ball.h"


Ball::Ball(Platform* platform, std::string pathImage, int x, int y, float rot)
{
	this->x = x;
	this->y = y;
	this->rot = rot;
	this->pathImage = pathImage;
	this->platform = platform;
}
void Ball::init()
{
	image = new Image();
	image->LoadImage(pathImage);
	image->GetTexture();
}

void Ball::draw()
{
	platform->RenderImage(image, x, y, rot);
}

void Ball::update()
{
	x += dir;
	rot += 0.4;
}