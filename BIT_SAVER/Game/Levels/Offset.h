/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Clear.h
Project: BIT_SAVER
Author:
Creation date:
-----------------------------------------------------------------*/
#pragma once
#include <string>
#include "..\Engine\GameState\GameState.h" // BIT_SAVER::GameState
#include "..\Engine\GameObject\GameObjectManager.h" // gameobjectmanager
#include"..\Engine\Input\Input.h"  //input key
#include"..\..\Engine\Physics\Camera.h"

class CheckBox;
class Hero;
class Track;
class Background;
class EnergyBar;

class Offset : public GameState
{
public:

    Offset();
    void Load() override;
    void Update(double dt) override;
    void Unload() override;
    void Draw() override;

    std::string GetName() override { return "Offset"; }



    double GetResultTime();
private:
    Texture* gameover;
    InputKey ESCAPE;
    InputKey HitKey;
    CheckBox* checkBox;
    Camera camera;
    GameObjectManager* gameObjectManager;
    Hero* heroPtr;
    Track* trackPtr;
    Background* backPtr;
    EnergyBar* energyBar;

    double compareTime;
    double resultTime;

};