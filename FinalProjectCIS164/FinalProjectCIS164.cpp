// FinalProjectCIS164.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Song.h"

int main()
{
    std::cout << "Hello Mysti!\n";
	std::cout << "I'm adding stuff now!\n";

	std::cout << "Hey Amy, I really hope you get this!" << endl;
	std::cout << "And perhaps this.";
	std::cout << "I had to change my credentials to generic in the control panel.";
	Song a = 	Song("Hey Jude", "Beatles, The");
	std::cout << endl<<a.display();

}

