#include "Fight.h"
#include "GameCharacters.h"
#include "Menu.h"
#include "Helper.h"

//this will take care of the logic for attacking the villain
void HeroAttack(GameCharacters& player)
{
	player.userVillian.health -= player.userHero.GetAttack();

	
}

//this will take care of the logic for defending against the villain
void HeroDefend(GameCharacters& player)
{






}

//this will take care of the logic for attacking the hero
void VillainAttack(GameCharacters& player)
{
	



}

//this will take care of the logic for defending against the hero
void VillainDefend(GameCharacters& player)
{






}

//Randomizes the Villain to attack or defend
void RandomAttDef(GameCharacters& player)
{




}

//This method will do the calculations for the data the user has entered
GameCharacters Calculate(GameCharacters& data)
{
	data.userHero.health -= data.userWeapon.GetMinusHealth();//subtract health from weapon
	data.userHero.attack += data.userWeapon.GetAddAttack();//adds damage from weapon
	data.userHero.attack -= data.userArmour.GetMinusDamage();//subtract damage from armor

	data.userVillian.health -= helper::RandomNumberGenerator(0, 5);//subtract health from weapon
	data.userVillian.attack += helper::RandomNumberGenerator(0, 5);//adds damage from weapon
	data.userVillian.attack -= helper::RandomNumberGenerator(0, 5);//subtract damage from armor

	return data;
}


//this will be the fight scene
void Fight(GameCharacters& data)
{
	GameCharacters player;
	bool check = true;
	while(check)
	{
		system("cls");//clears the screen
		FightMenu(data);
		unsigned int userFight = helper::GetMenuChoice("What would you like to do? ", 1, 3);
		player = Calculate(data);
		switch (userFight)
		{
		case 1:
			HeroAttack(player);
				break;
		case 2:
				break;
		case 3:
			check = false;
				break;
		}
	}

}

