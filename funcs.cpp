#include <iostream>
#include "funcs.h"

// add functions here

using std::string;

void test_ascii()
{
	std::cout << "input a word: ";
	string in;
	std::cin >> in;
	for (char x: in)
	{
		std::cout << x << " " << (int)x << std::endl;
	}
}

char shiftChar(char c, int rshift)
{
	return (char) (c + rshift);
}