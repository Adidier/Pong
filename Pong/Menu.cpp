#include "Menu.h"
#include<iostream>


void Menu::Init(Platform* platform, GameStateManager* gameStateManager) {
	back = new Image;
	back->LoadImage("back.png");
	this->platform = platform;
	player1 = new Player(platform, "player1.png", 0, 200, 0);
	player1->init();
	ball = new Ball(platform, "ball.png", 300, 200, 0);
	ball->init();
}

void Menu::Draw() {
	platform->RenderClear();
	platform->RenderImage(back, 0, 0, 0);
	player1->draw();
	ball->draw();
	platform->RenderPresent();
}

void Menu::Update() {
	ball->update();
}

void Menu::Close() {
}

bool Menu::Input(int key) {
	player1->update(key);
	return false;
}

bool Menu::InputMouse(int x, int y, int button)
{
	
	return false;
}