#include "Armour.h"
#include <vector>
#include <iostream>
#include "Helper.h"

Armour Armour::SelectArmour(const std::vector<Armour>& armours)
{
	std::cout << "\n\t\t+========+\n";
	std::cout <<   "\t\t| Armors |\n";
	std::cout <<   "\t\t+========+\n";
	std::cout << "+------------------------------------------------+\n";
	for (size_t i = 0; i < armours.size(); ++i)
	{
		std::cout << "| " << "[" << (i + 1) << "] " << armours[i].GetArmourName() << ": -" << armours[i].GetMinusDamage() << " Damage, +" << armours[i].GetDefense() << " Defense\n";
	}
	std::cout << "+------------------------------------------------+\n";
	unsigned int usersArmour = helper::GetMenuChoice("Which armor would you like to use? ", 1, 5);
	Armour selectedArmour = armours[usersArmour - 1];
	return selectedArmour;
}
