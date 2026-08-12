#include "Fight.h"
#include "GameCharacters.h"
#include "Menu.h"
#include "Helper.h"

//this will take care of the logic for attacking the villain
void HeroAttack(GameCharacters& data)
{
	


	
}

//this will take care of the logic for defending against the villain
void HeroDefend(GameCharacters& data)
{






}

//this will take care of the logic for attacking the hero
void VillainAttack(GameCharacters& data)
{
	



}

//this will take care of the logic for defending against the hero
void VillainDefend(GameCharacters& data)
{






}

//This method will do the calculations for the data the user has entered
void Calculate(GameCharacters& data)
{
	
}


//this will be the fight scene
void Fight(GameCharacters& data)
{
	bool check = true;
	while(check)
	{
		system("cls");//clears the screen
		FightMenu(data);
		unsigned int userFight = helper::GetMenuChoice("What would you like to do? ", 1, 3);
		switch (userFight)
		{
		case 1:
			
				break;
		case 2:
				break;
		case 3:
			check = false;
				break;
		}
	}


}

