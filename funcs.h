#pragma once

// add prototypes here
void test_ascii();
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptVigenere(std::string plaintext, std::string keyword);
int chartoint(char in);
std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string ciphertext, std::string keyword);