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
		armour = 0;
		defense = 0;
	}

	//ctor
	Armour(std::string _armourName, int _armour, int _defense)
		:armourName(_armourName), armour(_armour), defense(_defense)
	{
	}

	//getter
	const std::string GetArmourName() const { return armourName; }
	const int GetArmour() const { return armour; }
	const int GetDefense() const { return defense; }

	//Select armour method
	static Armour SelectArmour(const std::vector<Armour>& armours);

private:
	std::string armourName;
	int armour;
	int defense;

};

