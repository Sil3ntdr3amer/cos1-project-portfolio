#include "Fight.h"
#include "GameCharacters.h"
#include "Menu.h"
#include "Helper.h"

//this will take care of the logic for attacking the villain
void HeroAttack(GameCharacters& player)
{
	player.userVillian.health -= player.userHero.GetAttack();
	std::cout << "\n[ " << player.userHero.GetCharacterName() << " did " << player.userHero.GetAttack() << " damage to " << player.userVillian.GetCharacterName() << " ]\n";
}

//this will take care of the logic for defending against the villain
void HeroDefend(GameCharacters& player)
{
	player.userHero.health += player.userArmour.GetDefense();
	std::cout << "\n[ " << player.userHero.GetCharacterName() << " used defend and gained " << player.userArmour.GetDefense() << " HP ]\n";
}

//this will take care of the logic for attacking the hero
void VillainAttack(GameCharacters& player)
{
	player.userHero.health -= player.userVillian.GetAttack();
	std::cout << "[ " << player.userVillian.GetCharacterName() << " did " << player.userVillian.GetAttack() << " damage to " << player.userHero.GetCharacterName() << " ]\n";
}

//this will take care of the logic for defending against the hero
void VillainDefend(const int& defense, GameCharacters& player)
{
	player.userVillian.health += defense;
	std::cout << "[ " << player.userVillian.GetCharacterName() << " used defend and gained " << defense << " HP ]\n";
}

//Randomizes the Villain to attack or defend
void RandomAttDef(const int& defense, GameCharacters& player)
{
	switch (helper::RandomNumberGenerator(1, 2))
	{
	case 1:
		VillainAttack(player);
		break;
	case 2:
		VillainDefend(defense, player);
		break;
	}
}

//This method will do the calculations for the data the user has entered
GameCharacters Calculate(GameCharacters data)
{
	data.userHero.health -= data.userWeapon.GetMinusHealth();//subtract health from weapon
	data.userHero.attack += data.userWeapon.GetAddAttack();//adds damage from weapon
	data.userHero.attack -= data.userArmour.GetMinusDamage();//subtract damage from armor

	data.userVillian.health -= helper::RandomNumberGenerator(0, 5);//subtract health from weapon
	data.userVillian.attack += helper::RandomNumberGenerator(0, 5);//adds damage from weapon
	data.userVillian.attack -= helper::RandomNumberGenerator(0, 5);//subtract damage from armor

	return data;
}

//prints to the screen who won
bool Winner(GameCharacters& player)
{
	bool villainDown = player.userVillian.GetHealth() <= 0;
	bool heroDown = player.userHero.GetHealth() <= 0;

	if (villainDown && heroDown)
	{
		std::cout << "\n\nIt's a draw! Both fighters have fallen!\n";
		return false;
	}
	if (villainDown)
	{
		std::cout << "\n\nWinner is " << player.userHero.GetCharacterName() << "\n";
		return false;
	}
	if (heroDown)
	{
		std::cout << "\n\nWinner is " << player.userVillian.GetCharacterName() << "\n";
		return false;
	}
	return true;
}

//method to ask the user if they want to play again
bool PlayAgain()
{
	bool check = true;
	std::cout << "Play Again?\n";
	std::cout << "-----------\n";
	unsigned int playAgain = helper::GetMenuChoice(" 1. Yes\n 2. No\n\nPlease Select an option: ", 1, 2);
	switch (playAgain)
	{
	case 1:
		check =  true;
		break;
	case 2:
		std::cout << "\nOkay. Later Loser!!!\n";
		check = false;
		break;
	}
	return check;
}

//this will be the fight scene
void Fight(GameCharacters& data)
{
	GameCharacters player;
	bool check = true;

	system("cls");//clears the screen
	player = Calculate(data);
	FightMenu(player);
	
	int villainDefense = helper::RandomNumberGenerator(0, 10);

	do
	{
		system("cls");//clears the screen
		//print to the screen the characters
		std::cout << "\n\n\t\t  [ " << data.userHero.GetCharacterName() << " ]\t\t\t\t\t\t" << "  [ " << data.userVillian.GetCharacterName() << " ]\n\n";
		data.PrintFightPicture(data.userHero.GetPicture(), data.userVillian.GetPicture());
		std::cout << "\n\n";

		std::cout << "++++++++++++++\n";
		std::cout << "  1. Attack   \n";
		std::cout << "  2. Defend   \n";
		std::cout << "  3. Forfeit  \n";
		std::cout << "++++++++++++++\n";

		unsigned int userFight = helper::GetMenuChoice("What would you like to do? ", 1, 3);

		switch (userFight)
		{
		case 1:
			HeroAttack(player);
			// check for a kill BEFORE letting the villain act
			if (player.userVillian.GetHealth() <= 0)
			{
				check = Winner(player);
				helper::GetEnter();
				break;
			}

			RandomAttDef(villainDefense, player);
			if (player.userHero.GetHealth() <= 0)
			{
				check = Winner(player);
			}
			else
			{
				std::cout << "[ " << player.userHero.GetCharacterName() << " has " << player.userHero.GetHealth() << " HP ]\n";
				std::cout << "[ " << player.userVillian.GetCharacterName() << " has " << player.userVillian.GetHealth() << " HP ]\n";
			}
			helper::GetEnter();
			break;
		case 2:
			HeroDefend(player);
			// defending doesn't kill the villain, but check anyway for consistency
			if (player.userVillian.GetHealth() <= 0)
			{
				check = Winner(player);
				helper::GetEnter();
				break;
			}

			RandomAttDef(villainDefense, player);
			if (player.userHero.GetHealth() <= 0)
			{
				check = Winner(player);
			}
			else
			{
				std::cout << "[ " << player.userHero.GetCharacterName() << " has " << player.userHero.GetHealth() << " HP ]\n";
				std::cout << "[ " << player.userVillian.GetCharacterName() << " has " << player.userVillian.GetHealth() << " HP ]\n";
			}
			helper::GetEnter();
			break;
		case 3:
			check = false;
			break;
		}
	} while (check);
}


