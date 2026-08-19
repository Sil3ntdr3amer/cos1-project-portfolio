#include "Selections.h"
#include "Helper.h"
#include "Characters.h"
#include "GameCharacters.h"

//select hero
void MenuSelectHero(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userHero = Characters::SelectHeroes(data.heroes);
	system("cls");//clears the screen 
	std::cout << "\n\nHero selected: [ " << data.userHero.GetCharacterName() << " ]\n";
	data.PrintPicture(data.userHero.GetPicture());
	std::cout << "\n";
	helper::GetEnter();//press enter to continue
}

//select villain
void MenuSelectVillain(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userVillian = Characters::SelectVillians(data.villians);
	system("cls");//clears the screen 
	std::cout << "\n\nVillain selected: [ " << data.userVillian.GetCharacterName() << " ]\n";
	data.PrintPicture(data.userVillian.GetPicture());
	std::cout << "\n";
	helper::GetEnter();//press enter to continue
}

//select weapon
void MenuSelectWeapon(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userWeapon = Weapons::SelectWeapon(data.weapons);
	system("cls");//clears the screen 
	std::cout << "\n\nWeapon selected: [ " << data.userWeapon.GetWeaponName() << " ]";
	helper::GetEnter();//press enter to continue
}

//select armor
void MenuSelectArmor(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userArmour = Armour::SelectArmour(data.armours);
	system("cls");//clears the screen 
	std::cout << "\n\nArmor selected: [ " << data.userArmour.GetArmourName() << " ]";
	helper::GetEnter();//press enter to continue
}

