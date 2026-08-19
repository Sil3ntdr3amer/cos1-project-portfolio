#include "Menu.h"
#include "GameCharacters.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Fight.h"
#include "Helper.h"

//this will display the menu options
void Menu()
{
	std::cout << "\n+============================================+\n";
	std::cout << "| Welcome to Not So MARVELous Fighting Arena |\n";
	std::cout << "+============================================+\n\n";
	std::cout << "  1. FIGHT\n";
	std::cout << "  2. RANDOM FIGHT\n";
	std::cout << "  3. Exit\n\n";
}

//This will be the menu for the fight scene
void FightMenu(GameCharacters& data)
{
	std::cout << R"ART(
	   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	   |                 ______ _____ _____ _    _ _______ _                 |
	   |                |  ____|_   _/ ____| |  | |__   __| |                |
	   |                | |__    | || |  __| |__| |  | |  | |                |
	   |                |  __|   | || | |_ |  __  |  | |  | |                |
	   |                | |     _| || |__| | |  | |  | |  |_|                |
	   |                |_|    |_____\_____|_|  |_|  |_|  (_)                |
	   |                                                                     |
	   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
)ART";
	//print to the screen the characters
	std::cout << "\n\n\t\t  [ " << data.userHero.GetCharacterName() << " ]\t\t\t\t\t\t" << "  [ " << data.userVillian.GetCharacterName() << " ]\n\n";
	data.PrintFightPicture(data.userHero.GetPicture(), data.userVillian.GetPicture());
	data.ShowStats(data);
	helper::GetEnter();
	system("cls");//clears the screen
}
