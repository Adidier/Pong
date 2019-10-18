#include "Menu.h"
#include<iostream>


void Menu::Init(Platform* platform, GameStateManager* gameStateManager) {
	back = new Image;
	back->LoadImage("back.png");
	this->platform = platform;
}

void Menu::Draw() {
	platform->RenderClear();
	std::cout << "Estoy dibujando en menu" << std::endl;
	platform->RenderImage(back, 0, 0, 0);
	platform->RenderPresent();
}

void Menu::Update() {
	std::cout << "Estoy en menu" << std::endl;
}

void Menu::Close() {
}

bool Menu::Input(int) {

	return false;
}