#pragma once
#include <charconv>
#include <chrono>
#include <iostream>
#include <random>

//namespace
namespace helper
{
	//====================================================================================
	//====================================================================================
	//Checks for any memory leaks 
	static void MemLeak(const int block)
	{
		//place at the top of main
		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
		_CrtSetBreakAlloc(block);//this will set the block of memory to find the memory leak
		_CrtDumpMemoryLeaks();
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	//checks if the user input is a valid integer
	static bool IsInteger(char* const number)
	{
		//if the user enters nothing, this will take care of that
		if (number == nullptr || number[0] == '\0') { return false; }

		int value = 0;
		//this will give us the end of our char array
		const char* end = number + std::strlen(number);

		//ptr will keep going until it either reaches a value that is not a number 
		// or it will reach the end.
		//if an error occurs then ec will be filled with an error code
		auto [ptr, ec] = std::from_chars(number, end, value);

		//this will return true if there were no errors and ptr reached the end
		return (ec == std::errc() && ptr == end);
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	//Takes an integer and will convert it to binary
	static void PrintIntegerBinary(int* const num)
	{
		//used unsigned int to take care of negative numbers
		unsigned int div = *num;
		//this array will store our numbers: 0 or 1
		char binary[33];
		//had to set the null terminator
		binary[32] = '\0';
		//this will loop 32 times and add a 0 or 1 to our array
		for (int i = 31; i >= 0; i--)
		{
			binary[i] = (div % 2 == 0) ? '0' : '1';
			//had to make sure that we divide by 2 and restore that value 
			// so that we can keep dividing by 2 until we reach 0 or 1
			div /= 2;
		}
		std::cout << "Inputed Number: " << *num << "\n"
			<< "Binary: " << binary << "\n";
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	//Sorts an array of integers in ascending order
	static void BubbleSort(int* const arrPtr, const int numSize)
	{
		std::cout << "Unsorted: { ";
		for (int u = 0; u < numSize; ++u)
		{
			std::cout << arrPtr[u] << " ";
		}
		std::cout << "}\n";
		//this needs to loop however many items we have in our array
		for (int i = 0; i < numSize - 1; ++i)
		{
			//this loop is to compare the number at that index with the next number
			// then swap them if that number is greater than the next number.
			for (int j = 0; j < numSize - i - 1; ++j)
			{
				if (arrPtr[j] > arrPtr[j + 1])
				{
					std::swap(arrPtr[j], arrPtr[j + 1]);
				}
			}
		}
		std::cout << "Sorted: " << "  { ";
		//loop that will print out the array
		for (int c = 0; c < numSize; ++c)
		{
			std::cout << arrPtr[c] << " ";
		}
		std::cout << "}\n";
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	//Random number generator
	static int RandomNumberGenerator(const int& min, const int& max)
	{
		std::random_device rd;  // Obtain a seed from the system
		std::mt19937 gen(rd()); // Seed the generator
		std::uniform_int_distribution<> distrib(min, max); // Define the range
		int random_number = distrib(gen); // Generate the number
		return random_number;
		////found this online to help make a random number every time you run the program
		//auto nanosecond_time = std::chrono::high_resolution_clock::now().time_since_epoch().count();
		//srand(static_cast<unsigned int>(nanosecond_time));

		//return rand() % (max - min + 1) + min;
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	//converts an integer to hexadecimal
	static void PrintIntegerHex(int* const num)
	{
		std::cout << "User Number: " << *num << "\n";
		//created a variable to take care of negative numbers 
		unsigned int div = *num;
		//if the number is 0 then output 0 and not do the other calculations
		if (div == 0) { std::cout << "Hexadecimal: " << "0\n"; }
		else
		{
			//used this variable to easily grab the hexedecimals depending on the remainder
			const char hexDigits[] = "0123456789ABCDEF";
			//made a string to hold our final result
			std::string result = "";
			//this will keep dividing until we reach 0
			while (div > 0)
			{
				int r = div % 16;
				result = hexDigits[r] + result;//did this to flip the string so it was in correct order
				div /= 16;
			}
			std::cout << "Hexadecimal: " << result << "\n";
		}
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	
	//GetMenuChoice validates that the input is within the range of min and max
	static unsigned int GetMenuChoice(const std::string& prompt, const unsigned int& min, const unsigned int& max)
	{
		std::cout << prompt;
		std::string userInput;

		while (std::getline(std::cin, userInput))
		{
			try
			{
				unsigned int userNumber = std::stoi(userInput);
				if (userNumber <= max && userNumber >= min)
				{
					return userNumber;
					break;
				}
			}
			catch (...)
			{

			}
			std::cout << "[Your input is not valid]\n";
			std::cout << "Must be a number between " << min << " and " << max << ": ";
		}
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	//GetIndex will validate an index to make sure it is within the range
	static unsigned int GetIndex(const unsigned int& min, const unsigned int& max)
	{
		std::cout << "Index: ";
		std::string userInput;

		while (std::getline(std::cin, userInput))
		{
			try
			{
				unsigned int userNumber = std::stoi(userInput);
				if (userNumber <= max && userNumber >= min)
				{
					return userNumber;
					break;
				}
			}
			catch (...)
			{

			}
			std::cout << "[Your input is not valid]\n";
			std::cout << "Must be an index between " << min << " and " << max << ": ";
		}
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================
	//GetEnter method that will tell the user to press enter to continue.
	static void GetEnter()
	{
		std::cout << "\nPress Enter to Continue...";
		std::cin.get();
		std::cout << "\n\n";
	}
	//====================================================================================
	//====================================================================================

	//====================================================================================
	//====================================================================================

	//coinflip method
	//returns either true or false
	static bool CoinFlip()
	{
		bool result = true;
		int random_number = RandomNumberGenerator(0, 1);
		if (random_number == 0) { result = false; }
		return result;
	}







}