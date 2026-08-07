#pragma once
class Armour
{
public:
	//default ctor
	Armour()
	{
		armour = 0;
		defense = 0;
	}

	//ctor
	Armour(int _armour, int _defense)
		: armour(_armour), defense(_defense)
	{
	}



private:
	int armour;
	int defense;

};

