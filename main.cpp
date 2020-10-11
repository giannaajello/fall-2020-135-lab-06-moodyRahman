#include <iostream>

#include "funcs.h"

using std::string;

void moodtest(string func, string in, string expected)
{
  std::cout << func << ": got  " << in << "     " << "expected  " << expected;
  if (in == expected)
  {
    std::cout << "   GOOD RESULT!";
  }
  else
  {
    /* code */
  }

  std::cout << std::endl;
}

int main()
{

  string out = encryptCaesar("Way to Go!", 5);

  moodtest("encryptCeasar(\"abcde123!?\", 1)", encryptCaesar("abcde123!?", 1), "bcdef123!?");
  moodtest("decryptCeaser(\"bcdef123!?\")", decryptCaesar("bcdef123!?", 1), "abcde123!?");

  return 0;
}
