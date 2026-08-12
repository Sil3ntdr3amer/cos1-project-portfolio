#pragma once
#include <string>
#include <vector>

class Armour
{
public:
	//default ctor
	Armour()
	{
		armourName = "No armor";
		minusDamage = 0;
		defense = 0;
	}

	//ctor
	Armour(std::string _armourName, int _minusDamage, int _defense)
		:armourName(_armourName), minusDamage(_minusDamage), defense(_defense)
	{
	}

	//getter
	const std::string GetArmourName() const { return armourName; }
	const int GetArmour() const { return minusDamage; }
	const int GetDefense() const { return defense; }

	//Select armour method
	static Armour SelectArmour(const std::vector<Armour>& armours);


private:
	std::string armourName;
	int minusDamage;
	int defense;

};

