#include "Game.h"
#include<iostream>


void Game::Init(Platform* platform, GameStateManager* gameStateManager) {
}

void Game::Draw() {
	std::cout << "Estoy dibujando en game";

}

void Game::Update() {
	std::cout << "Estoy en game";
}

void Game::Close() {
}

bool Game::Input(int) {
	return false;
}

bool Game::InputMouse(int x, int y, int button)
{
	return false;
}