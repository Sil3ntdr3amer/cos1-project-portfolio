#include "Weapons.h"
#include <vector>
#include <iostream>
#include "Helper.h"
#include <string>

Weapons Weapons::SelectWeapon(const std::vector<Weapons>& weapons)
{
	std::cout << "\n\t\t+=========+\n";
	std::cout << "\t\t| Weapons |\n";
	std::cout << "\t\t+=========+\n";
	std::cout << "+------------------------------------------------+\n";
	for (size_t i = 0; i < weapons.size(); ++i)
	{
		std::cout << "| " << "[" << (i + 1) << "] " << weapons[i].GetWeaponName() << ": -" << weapons[i].GetMinusHealth() << "HP, +" << weapons[i].GetAddAttack() << " Damage\n";
	}
	std::cout << "+------------------------------------------------+\n";
	unsigned int usersWeapon = helper::GetMenuChoice("Which Hero would you like to use? ", 1, 5);
	Weapons selectedWeapon = weapons[usersWeapon - 1];
	return selectedWeapon;
}
