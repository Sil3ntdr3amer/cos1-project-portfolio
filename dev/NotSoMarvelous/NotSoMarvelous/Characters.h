#pragma once
#include <string>
#include <vector>

class Characters
{
public:
	//default ctor
	Characters()
	{
		picture = "";
		characterName = "";
		health = 100;
		attack = 10;
	}

	//ctor
	Characters(std::string _characterName, std::string _picture, int _health, int _attack)
		: characterName(_characterName), picture(_picture), health(_health), attack(_attack)
	{
	}

	//getters
	const std::string GetCharacterName() const { return characterName; }
	const std::string GetPicture() const { return picture; }
	const int GetHealth() const { return health; }
	const int GetAttack() const { return attack; }

	//show characters decleration
	static Characters SelectHeroes(const std::vector<Characters>& heroes);
	static Characters SelectVillians(const std::vector<Characters>& villians);

    int health;
	int attack;

private:
	std::string characterName;
	std::string picture;
};

