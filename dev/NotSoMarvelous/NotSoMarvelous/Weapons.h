#pragma once
class Weapons
{
public:
	//default ctor
	Weapons()
	{
		addAttack = 0;
		minusHealth = 0;
	}

	//ctor
	Weapons(int _addAttack, int _minusHealth)
		: addAttack(_addAttack), minusHealth(_minusHealth)
	{
	}




private:
	int addAttack;
	int minusHealth;

};

