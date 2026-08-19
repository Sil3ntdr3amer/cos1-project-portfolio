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
#include "Selections.h"


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
		unsigned int userMenu = helper::GetMenuChoice("Menu Option: ", 1, 3);

		//menu loop
		switch (userMenu)
		{
		case 1://user selections
			MenuSelectHero(data);
			MenuRandomVillain(data);
			MenuSelectWeapon(data);
			MenuSelectArmor(data);
			Fight(data);
			system("cls");//clears the screen 
			check = PlayAgain();
			break;
		case 2://randomize everything
			MenuRandomHero(data);
			MenuRandomVillain(data);
			MenuRandomWeapon(data);
			MenuRandomArmor(data);
			Fight(data);
			system("cls");//clears the screen 
			check = PlayAgain();
			break;
		case 3://exit
			check = false;
			break;
		default:
			break;
		}
	} while (check);
}
