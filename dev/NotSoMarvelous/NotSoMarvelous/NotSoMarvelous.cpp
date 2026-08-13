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
#include "Fight.h"


int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	//created variable to hold the users selection of Hero, Villian, Armours, and Weapons
	GameCharacters data;

	//menu loop 
	bool check = true;
	do
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
			data.userHero = Characters::SelectHeroes(data.heroes);
			system("cls");//clears the screen 
			std::cout << "\n\nHero selected: [ " << data.userHero.GetCharacterName() << " ]\n";
			data.PrintPicture(data.userHero.GetPicture());
			std::cout << "\n";
			helper::GetEnter();//press enter to continue
			break;
		case 2://select villian
			system("cls");//clears the screen 
			data.userVillian = Characters::SelectVillians(data.villians);
			system("cls");//clears the screen 
			std::cout << "\n\nVillain selected: [ " << data.userVillian.GetCharacterName() << " ]\n";
			data.PrintPicture(data.userVillian.GetPicture());
			std::cout << "\n";
			helper::GetEnter();//press enter to continue
			break;
		case 3://select weapon
			system("cls");//clears the screen 
			data.userWeapon = Weapons::SelectWeapon(data.weapons);
			system("cls");//clears the screen 
			std::cout << "\n\nWeapon selected: [ " << data.userWeapon.GetWeaponName() << " ]";
			helper::GetEnter();//press enter to continue
			break;
		case 4://select armor
			system("cls");//clears the screen 
			data.userArmour = Armour::SelectArmour(data.armours);
			system("cls");//clears the screen 
			std::cout << "\n\nArmor selected: [ " << data.userArmour.GetArmourName() << " ]";
			helper::GetEnter();//press enter to continue
			break;
		case 5://fight
			system("cls");//clears the screen 
			Fight(data);
			check = PlayAgain();
			helper::GetEnter();//press enter to continue
			break;
		case 6://exit
			check = false;
			break;
		default:
			break;
		}
	} while (check);
}
