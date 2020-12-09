#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("ceasar encrypt")
{
	CHECK(encryptCaesar("a", 1) == "b");
	CHECK(encryptCaesar("z", 1) == "a");
	CHECK(encryptCaesar("A", 1) == "B");
	CHECK(encryptCaesar("Z", 1) == "A");
	CHECK(encryptCaesar("hello world!", 6) == "nkrru cuxrj!");
	CHECK(encryptCaesar("a123!!!", 1) == "b123!!!");
}

TEST_CASE("ceasar decrypt")
{
	CHECK(decryptCaesar("bcdef123!?AYZ", 1) == "abcde123!?ZXY");
	CHECK(decryptCaesar("ifmmp", 1) == "hello");
	CHECK(decryptCaesar("vguvkpi", 2) == "testing");
}

TEST_CASE("debugs")
{
	CHECK(shiftChar('a', 1) == 'b');
	CHECK(shiftChar('a', -1) == 'z');
	CHECK(shiftChar('b', 1) == 'c');
	CHECK(shiftChar('c', -1) == 'b');
}
