#include "Characters.h"
#include <iostream>
#include <vector>


//Shows the user all of the Heroes and has them select one
void Characters::SelectHeroes(const std::vector<Characters>& heroes)
{
	std::cout << "\n+========+\n";
	std::cout << "| Heroes |\n";
	std::cout << "+========+\n";
	for (size_t i = 0; i < heroes.size(); ++i)
	{
		std::cout << "\tName: " << heroes[i].GetName() << ", " << "Health: " << heroes[i].GetHealth() << ", " << "Damage: " << heroes[i].GetAttack() << "\n";
	}
}

//Shows the user all of the Villians and has them select one
void Characters::SelectVillians(const std::vector<Characters>& villians)
{
	std::cout << "\n+==========+\n";
	std::cout << "| Villians |\n";
	std::cout << "+==========+\n";
	for (size_t i = 0; i < villians.size(); ++i)
	{
		std::cout << "\tName: " << villians[i].GetName() << ", " << "Health: " << villians[i].GetHealth() << ", " << "Damage: " << villians[i].GetAttack() << "\n";
	}
}
