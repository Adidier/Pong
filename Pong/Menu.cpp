#include "Menu.h"
#include<iostream>


void Menu::Init(Platform* platform, GameStateManager* gameStateManager) {
}

void Menu::Draw() {
	std::cout << "Estoy dibujando en menu" << std::endl;
}

void Menu::Update() {
	std::cout << "Estoy en menu" << std::endl;
}

void Menu::Close() {
}

bool Menu::Input(int) {
	return false;
}