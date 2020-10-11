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
	if (islower(c))
	{
		return (char)((((c - 97) + rshift) % 26) + 97);

	}
	else if (isupper(c))
	{
		return (char)((((c - 65) + rshift) % 26) + 65);
	}
	
	return c;
}

}