#pragma once
#include "GameState.h"
#include "Platform.h"
#include "GameStateManager.h"

class Menu : public GameState
{
	public:
		virtual void Init(Platform*, GameStateManager*) override;
	    virtual void Draw() override;
		virtual void Update() override;
		virtual void Close() override;
		virtual bool Input(int) override;
};

