#pragma once
#include"Image.h"
#include <string>
#include"Platform.h"
class Player
{
	private:
		Image *image;
		int x { 0 };
		int y { 0 };
		float rot { 0 };
		std::string pathImage;
		Platform* platform;
	public:
		Player(Platform* platform,std::string pathImage, int x,int y, float rot);
		void init();
		void draw();
		void update(int key);
};

