#pragma once
#include <string>
#include <vector>

class Characters
{
public:
	//default ctor
	Characters()
	{
		name = "";
		health = 100;
		attack = 10;
	}

	//ctor
	Characters(const std::string& _name, int _health, int _attack)
		: name(_name), health(_health), attack(_attack)
	{
	}

	//getters
	const std::string GetName() const { return name; }
	const int GetHealth() const { return health; }
	const int GetAttack() const { return attack; }


	//show characters decleration
	static Characters SelectHeroes(const std::vector<Characters>& heroes);
	static Characters SelectVillians(const std::vector<Characters>& villians);

private:
	std::string name;
	int health;
	int attack;


};

