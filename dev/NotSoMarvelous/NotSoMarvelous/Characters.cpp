#include "Characters.h"
#include <iostream>
#include <vector>
#include "Helper.h"


//Shows the user all of the Heroes and has them select one
Characters Characters::SelectHeroes(const std::vector<Characters>& heroes, const Characters& hero)
{
	std::cout << "\n\t\t+========+\n";
	std::cout << "\t\t| Heroes |\n";
	std::cout << "\t\t+========+\n";
	std::cout << "+------------------------------------------------+\n";
	for (size_t i = 0; i < heroes.size(); ++i)
	{
		std::cout << "| " << "[" << (i + 1) << "] " << heroes[i].GetName() << ": " << heroes[i].GetHealth() << "HP, " << heroes[i].GetAttack() << " Damage\n";
	}
	std::cout << "+------------------------------------------------+\n";
	unsigned int usersHero = helper::GetMenuChoice("Which Hero would you like to use? ", 1, 5);
	Characters hero = heroes[usersHero];
	return hero;
}

//Shows the user all of the Villians and has them select one
Characters Characters::SelectVillians(const std::vector<Characters>& villians, const Characters& villian)
{
	std::cout << "\n\t\t+==========+\n";
	std::cout << "\t\t| Villians |\n";
	std::cout << "\t\t+==========+\n";
	std::cout << "+------------------------------------------------+\n";
	for (size_t i = 0; i < villians.size(); ++i)
	{
		std::cout << "| " << "[" << (i + 1) << "] " << villians[i].GetName() << ": " << villians[i].GetHealth() << "HP, " << villians[i].GetAttack() << " Damage\n";
	}
	std::cout << "+------------------------------------------------+\n";
	unsigned int usersVillian = helper::GetMenuChoice("Which Villian would you like to go up against? ", 1, 5);
	Characters villian = villians[usersVillian];
	return villian;
}
