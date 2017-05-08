// cin_termination_withSpecialChar.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>


int main()
{
	const int MAX = 2000; // max characters in string
	char strings[MAX];
	std::string tekst;

	std::cout << "Enter striiiing: ";
	std::cin.get(strings, MAX, '$'); //terminate string with $

	std::cout << "you have entered: " << strings << std::endl;


	system("pause");
    return 0;
}

