// Cafe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

class product
{
public:
	std::string name;
	float price;

	float returnPrice(int i) {
		return i * price;
	}
};

int main()
{
	std::string input;
	bool running = true;

	product Coffee;
	Coffee.name = "coffee";
	Coffee.price = 2.15;

	product Sandwich;
	Sandwich.name = "sandwich";
	Sandwich.price = 3.50;

	product Burger;
	Burger.name = "burger";
	Burger.price = 5.25;

	std::cout << "\nWelcome to the cafe.\n";
	while (running)
	{		
		std::cout << "what will you do? (end, list, name of product on list)\n";
		std::cin >> input;
		if (input == "list") //TODO: make this into a for loop that goes through an array/list of classes
		{
			std::cout << Coffee.name;
			std::cout << " ";
			std::cout << Coffee.price;
			std::cout << ", ";

			std::cout << Sandwich.name;
			std::cout << " ";
			std::cout << Sandwich.price;
			std::cout << ", ";

			std::cout << Burger.name;
			std::cout << " ";
			std::cout << Burger.price;
			std::cout << "\n";
		}
		if (input == "coffee")
		{
			float i;
			std::cout << "\nHow many?\n";
			std::cin >> i;
			std::cout << Coffee.returnPrice(i);
		}
		if (input == "sandwich")
		{
			float i;
			std::cout << "\nHow many?\n";
			std::cin >> i;
			std::cout << Sandwich.returnPrice(i);
		}
		if (input == "burger")
		{
			float i;
			std::cout << "\nHow many?\n";
			std::cin >> i;
			std::cout << Burger.returnPrice(i);
		}		
		if (input == "end")
		{
			running = false;
		}
		
	}

	

    std::cout << "aight thanks for coming bye.";
}

