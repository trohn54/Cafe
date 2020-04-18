// Cafe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
std::string input;

class product
{
public:
	std::string name;
	float price;

	float returnPrice(int i) {
		return i * price;
	}
};

void MakeChange(float c)
{
	float dollars = 0;
	float quarters = 0;
	float dimes = 0;
	float nickels = 0;
	float pennies = 0;

	if (c < 0)
	{
		c *= -1;
	}

	while (c >= 1)
	{
		dollars++;
		c--;
	}
	while (c >= 0.25)
	{
		quarters++;
		c -= 0.25;
	}
	while (c >= 0.1)
	{
		dimes++;
		c -= 0.1;
	}
	while (c >= .05)
	{
		nickels++;
		c -= 0.05;
	}
	while (c >= 0.01)
	{
		pennies++;
		c -= 0.01;
	}

	std::cout << "Here is your change:\n";

	if (dollars > 0)
	{
		std::cout << dollars;
		std::cout << " dollars\n";
	}
	if (quarters > 0)
	{
		std::cout << quarters;
		std::cout << " quarters\n";
	}
	if (dimes > 0)
	{
		std::cout << dimes;
		std::cout << " dimes\n";
	}
	if (nickels > 0)
	{
		std::cout << nickels;
		std::cout << " nickels\n";
	}
	if (pennies > 0)
	{
		std::cout << pennies;
		std::cout << " pennies\n";
	}
}

void Pay(float p)
{
	while (p > 0) 
	{
		std::cout << "\nPay the cost by typing the type of bill you will use: 1, 5, 10 or 20\n";
		std::cin >> input;
		if (input == "1")
		{
			p--;
		}
		if (input == "5")
		{
			p -= 5;
		}
		if (input == "10")
		{
			p -= 10;
		}
		if (input == "20")
		{
			p -= 20;
		}

		std::cout << p;
	}	

	MakeChange(p);
}



int main()
{
	
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
			Pay(Coffee.returnPrice(i));
		}
		if (input == "sandwich")
		{
			float i;
			std::cout << "\nHow many?\n";
			std::cin >> i;
			std::cout << Sandwich.returnPrice(i);
			Pay(Sandwich.returnPrice(i));
		}
		if (input == "burger")
		{
			float i;
			std::cout << "\nHow many?\n";
			std::cin >> i;
			std::cout << Burger.returnPrice(i);
			Pay(Burger.returnPrice(i));

		}		
		if (input == "end")
		{
			running = false;
		}
	}
    std::cout << "aight thanks for coming bye.";
}

