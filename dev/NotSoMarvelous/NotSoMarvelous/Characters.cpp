#include "Characters.h"
#include <iostream>
#include <vector>
#include "Helper.h"


//Shows the user all of the Heroes and has them select one
Characters Characters::SelectHeroes(const std::vector<Characters>& heroes)
{
	std::cout << "\n\t\t+========+\n";
	std::cout << "\t\t| Heroes |\n";
	std::cout << "\t\t+========+\n";
	std::cout << "+------------------------------------------------+\n";
	for (size_t i = 0; i < heroes.size(); ++i)
	{
		std::cout << "| " << "[" << (i + 1) << "] " << heroes[i].GetCharacterName() << ": " << heroes[i].GetHealth() << "HP, " << heroes[i].GetAttack() << " Damage\n";
	}
	std::cout << "+------------------------------------------------+\n";
	unsigned int usersHero = helper::GetMenuChoice("Which Hero would you like to use? ", 1, 5);
	Characters selectedHero = heroes[usersHero - 1];
	return selectedHero;
}

//Shows the user all of the Villians and has them select one
Characters Characters::SelectVillians(const std::vector<Characters>& villians)
{
	std::cout << "\n\t\t+==========+\n";
	std::cout << "\t\t| Villians |\n";
	std::cout << "\t\t+==========+\n";
	std::cout << "+------------------------------------------------+\n";
	for (size_t i = 0; i < villians.size(); ++i)
	{
		std::cout << "| " << "[" << (i + 1) << "] " << villians[i].GetCharacterName() << ": " << villians[i].GetHealth() << "HP, " << villians[i].GetAttack() << " Damage\n";
	}
	std::cout << "+------------------------------------------------+\n";
	unsigned int usersVillian = helper::GetMenuChoice("Which Villian would you like to go up against? ", 1, 5);
	Characters selectedVillian = villians[usersVillian - 1];
	return selectedVillian;
}
