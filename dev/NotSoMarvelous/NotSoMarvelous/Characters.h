#pragma once
#include <string>
#include <vector>

class Characters
{
public:
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
	static Characters SelectHeroes(const std::vector<Characters>& heroes, const Characters& hero);
	static Characters SelectVillians(const std::vector<Characters>& villians, const Characters& villian);

private:
	std::string name;
	int health;
	int attack;


};

