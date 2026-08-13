#pragma once
#include "GameCharacters.h"


void HeroAttack(GameCharacters& player);
void HeroDefend(GameCharacters& player);
void VillainAttack(GameCharacters& player);
void VillainDefend(const int& defense, GameCharacters& player);
void RandomAttDef(const int& defense, GameCharacters& player);
GameCharacters Calculate(GameCharacters& data);
bool Winner(GameCharacters& player);
bool PlayAgain();
void Fight(GameCharacters& data);
