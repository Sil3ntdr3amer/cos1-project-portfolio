#include <iostream>
#include "Menu.h"
#include "Helper.h"

int main()
{
	//menu loop 
	bool check = true;
	while (check)
	{
		Menu();//method to display the menu selections

		unsigned int userMenu = helper::GetMenuChoice("Menu Option: ", 1, 5);
		switch (userMenu)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:
			check = false;
			break;
		default:
			break;
		}
	}
}
