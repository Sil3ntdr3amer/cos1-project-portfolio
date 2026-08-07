#include <iostream>
#include "Menu.h"
#include "Helper.h"
#include "Characters.h"

int main()
{
	//create all the heroes and villians
	Characters spiderman("Spiderman", 100, 10); // hp: 100 / att : 10
	Characters wolverine("Wolverine", 94, 13); // hp : 94 / att : 13
	Characters hulk("Hulk", 90, 15); // hp : 90 / att : 15
	Characters captainAmerica("Captain America", 96, 12); // hp : 96 / att : 12
	Characters hawkeye("Hawkeye", 98, 11); // hp : 98 / att : 11
	Characters loki("Loki", 100, 10); // hp : 100 / att : 10
	Characters venom("Venom", 94, 13); // hp : 94 / att : 13
	Characters drDoom("Dr. Doom", 90, 15); // hp : 90 / att : 15
	Characters magneto("Magneto", 96, 12); // hp : 96 / att : 12
	Characters greenGoblin("Green Goblin", 98, 11); // hp : 98 / att : 11
	std::vector<Characters> heroes = { spiderman, wolverine, hulk, captainAmerica, hawkeye };
	std::vector<Characters> villians = { loki, venom, drDoom, magneto, greenGoblin };

	//created variables to hold the users selection of Hero and Villian
	Characters userHero;
	Characters userVillian;

	//menu loop 
	bool check = true;
	while (check)
	{
		Menu();//method to display the menu selections

		//stores the users selection in userMenu
		unsigned int userMenu = helper::GetMenuChoice("Menu Option: ", 1, 6);

		switch (userMenu)
		{
		case 1:
			userHero = Characters::SelectHeroes(heroes);
			std::cout << "You have selected " << userHero.GetName() << " as your hero!";
			helper::GetEnter();
			break;
		case 2:
			userVillian = Characters::SelectVillians(villians);
			std::cout << "You have selected " << userVillian.GetName() << " as your villian!";
			helper::GetEnter();
			break;
		case 3:
			helper::GetEnter();
			break;
		case 4:
			helper::GetEnter();
			break;
		case 5:
			helper::GetEnter();
			break;
		case 6:
			check = false;
			break;
		default:
			break;
		}
	}
}
