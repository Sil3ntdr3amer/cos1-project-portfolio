#pragma once
#include "Characters.h"
#include "Armour.h"
#include "Weapons.h"

void Fight();

void HeroAttack(Characters& hero, Characters& villain, const Weapons& weapon, const Armour& armour);
void HeroDefend(Characters& hero, Characters& villain, const Weapons& weapon, const Armour& armour);
void VillainAttack(Characters& hero, Characters& villain, const Weapons& weapon, const Armour& armour);
void VillainDefend(Characters& hero, Characters& villain, const Weapons& weapon, const Armour& armour);