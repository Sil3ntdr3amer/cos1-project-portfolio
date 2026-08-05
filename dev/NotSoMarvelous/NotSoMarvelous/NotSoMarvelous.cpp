#include <iostream>
#include "Menu.h"
#include "Helper.h"

int main()
{
	//this will show our menu options
	Menu();
	helper::GetMenuChoice("Menu Option: ", 1, 5);
}
