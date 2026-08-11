#include <iostream>
#include <vector>
#include "Menu.h"
#include "Helper.h"
#include "Characters.h"
#include "Weapons.h"
#include "Armour.h"
#include <cstdlib>
#include "GameCharacters.h"
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	//created variables to hold the users selection of Hero, Villian, Armours, and Weapons
	Characters userHero;
	Characters userVillian;
	Armour userArmour;
	Weapons userWeapon;
	GameCharacters data;

	//menu loop 
	bool check = true;
	while (check)
	{
		system("cls");//clears the screen 

		Menu();//method to display the menu selections

		//stores the users selection in userMenu
		unsigned int userMenu = helper::GetMenuChoice("Menu Option: ", 1, 6);

		//menu loop
		switch (userMenu)
		{
		case 1://select hero
			system("cls");//clears the screen 
			userHero = Characters::SelectHeroes(data.heroes);
			system("cls");//clears the screen 
			std::cout << "\n\nHero selected: [ " << userHero.GetCharacterName() << " ]\n\t" << userHero.GetPicture() << "\n";
			helper::GetEnter();//press enter to continue
			break;
		case 2://select villian
			system("cls");//clears the screen 
			userVillian = Characters::SelectVillians(data.villians);
			system("cls");//clears the screen 
			std::cout << "\n\nVillain selected: [ " << userVillian.GetCharacterName() << " ]\n\t" << userVillian.GetPicture() << "\n";
			helper::GetEnter();//press enter to continue
			break;
		case 3://select weapon
			system("cls");//clears the screen 
			userWeapon = Weapons::SelectWeapon(data.weapons);
			system("cls");//clears the screen 
			std::cout << "\n\nWeapon selected: [ " << userWeapon.GetWeaponName() << " ]";
			helper::GetEnter();//press enter to continue
			break;
		case 4://select armor
			system("cls");//clears the screen 
			userArmour = Armour::SelectArmour(data.armours);
			system("cls");//clears the screen 
			std::cout << "\n\nArmor selected: [ " << userArmour.GetArmourName() << " ]";
			helper::GetEnter();//press enter to continue
			break;
		case 5://fight
			system("cls");//clears the screen 
			helper::GetEnter();//press enter to continue
			break;
		case 6://exit
			check = false;
			break;
		default:
			break;
		}
	}
}
