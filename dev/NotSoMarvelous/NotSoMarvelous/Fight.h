#pragma once
#include "GameCharacters.h"


void HeroAttack(GameCharacters& player);
void HeroDefend(GameCharacters& player);
void VillainAttack(GameCharacters& player);
void VillainDefend(GameCharacters& player);
void RandomAttDef(GameCharacters& player);
GameCharacters Calculate(GameCharacters& data);
void Fight(GameCharacters& data);
