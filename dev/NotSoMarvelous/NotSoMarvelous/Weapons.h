#pragma once
#include <string>
#include <vector>

class Weapons
{
public:
	//default ctor
	Weapons()
	{
		weaponName = "No Weapon";
		addAttack = 0;
		minusHealth = 0;
	}

	//ctor
	Weapons(std::string _weaponName, int _addAttack, int _minusHealth)
		: weaponName(_weaponName), addAttack(_addAttack), minusHealth(_minusHealth)
	{
	}

	//getters
	const std::string GetWeaponName() const { return weaponName; }
	const int GetAddAttack() const { return addAttack; }
	const int GetMinusHealth() const { return minusHealth; }

	//Select weapons method
	static Weapons SelectWeapon(const std::vector<Weapons>& weapons);
	//Random weapon
	static Weapons RandomWeapon(const std::vector<Weapons>& weapons);


private:
	std::string weaponName;
	int addAttack;
	int minusHealth;

};

