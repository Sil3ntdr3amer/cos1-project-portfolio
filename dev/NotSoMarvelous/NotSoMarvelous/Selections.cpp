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

//select weapon
void MenuSelectWeapon(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userWeapon = Weapons::SelectWeapon(data.weapons);
	system("cls");//clears the screen 
	std::cout << "\n\nWeapon selected: [ " << data.userWeapon.GetWeaponName() << " ]\n";
	helper::GetEnter();//press enter to continue
}

//select armor
void MenuSelectArmor(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userArmour = Armour::SelectArmour(data.armours);
	system("cls");//clears the screen 
	std::cout << "\n\nArmor selected: [ " << data.userArmour.GetArmourName() << " ]\n";
	helper::GetEnter();//press enter to continue
}

//random hero
void MenuRandomHero(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userHero = Characters::RandomHero(data.heroes);
	system("cls");//clears the screen 
	std::cout << "\n\nHero: [ " << data.userHero.GetCharacterName() << " ]\n";
	data.PrintPicture(data.userHero.GetPicture());
	std::cout << "\n";
	helper::GetEnter();//press enter to continue
}

//random villain
void MenuRandomVillain(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userVillian = Characters::RandomVillian(data.villians);
	system("cls");//clears the screen 
	std::cout << "\n\nVillain approaching: [ " << data.userVillian.GetCharacterName() << " ]\n";
	data.PrintPicture(data.userVillian.GetPicture());
	std::cout << "\n";
	helper::GetEnter();//press enter to continue
}

//random weapon
void MenuRandomWeapon(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userWeapon = Weapons::RandomWeapon(data.weapons);
	system("cls");//clears the screen 
	std::cout << "\n\nWeapon: [ " << data.userWeapon.GetWeaponName() << " ]\n";
	helper::GetEnter();//press enter to continue
}

//random armor
void MenuRandomArmor(GameCharacters& data)
{
	system("cls");//clears the screen 
	data.userArmour = Armour::RandomArmor(data.armours);
	system("cls");//clears the screen 
	std::cout << "\n\nArmor: [ " << data.userArmour.GetArmourName() << " ]\n";
	helper::GetEnter();//press enter to continue
}