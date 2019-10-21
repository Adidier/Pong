#pragma once
#include"Image.h"
#include <string>
#include"Platform.h"
class Ball
{
private:
	Image* image;
	int x{ 0 };
	int y{ 0 };
	int dir{ -1 };
	float rot{ 0 };
	std::string pathImage;
	Platform* platform;
public:
	Ball(Platform* platform, std::string pathImage, int x, int y, float rot);
	void init();
	void draw();
	void update();
};

