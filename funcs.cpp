#include <iostream>
#include "funcs.h"

// add functions here

using std::string;

void test_ascii()
{
	std::cout << "input a word: ";
	string in;
	std::cin >> in;
	for (char x : in)
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

string encryptCaesar(string plaintext, int rshift)
{
	string out = "";
	for (char x : plaintext)
	{
		if (isalpha(x))
		{
			out += shiftChar(x, rshift);
		}
		else
		{
			out += x;
		}
	}
	return out;
}

int chartoint(char in)
{
	return ((tolower(in) - 97) % 26);
}

string encryptVigenere(string plaintext, string keyword)
{
	string out = "";
	int keyc = 0;
	for (char x : plaintext)
	{
		if (isalpha(x))
		{
			out += shiftChar(x, chartoint(keyword[keyc % keyword.length()]));
			keyc++;
		}
		else
		{
			out += x;
		}
	}
	return out;
}

std::string decryptCaesar(std::string ciphertext, int rshift)
{
	return encryptCaesar(ciphertext, -1 * rshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
	string out = "";
	int keyc = 0;
	for (char x : ciphertext)
	{
		if (isalpha(x))
		{
			out += shiftChar(x, -1 * chartoint(keyword[keyc % keyword.length()]));
			keyc++;
		}
		else
		{
			out += x;
		}
	}
	return out;
}