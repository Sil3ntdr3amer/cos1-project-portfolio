#pragma once
#include <string>
#include <vector>

class Characters
{
public:
	//default ctor
	Characters()
	{
		characterName = "";
		health = 100;
		attack = 10;
	}

	//ctor
	Characters(const std::string& _characterName, int _health, int _attack)
		: characterName(_characterName), health(_health), attack(_attack)
	{
	}

	//getters
	const std::string GetCharacterName() const { return characterName; }
	const int GetHealth() const { return health; }
	const int GetAttack() const { return attack; }


	//show characters decleration
	static Characters SelectHeroes(const std::vector<Characters>& heroes);
	static Characters SelectVillians(const std::vector<Characters>& villians);

private:
	std::string characterName;
	int health;
	int attack;


};

