#pragma once
#include "GameState.h"
#include "Platform.h"
#include "GameStateManager.h"
#include "Image.h"
class Menu : public GameState
{
	private:
		Image* back;
		Platform* platform;
	public:
		virtual void Init(Platform*, GameStateManager*) override;
	    virtual void Draw() override;
		virtual void Update() override;
		virtual void Close() override;
		virtual bool Input(int) override;
};

