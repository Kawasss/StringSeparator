#include "Separator.h"
#include <iostream>

const std::string example1 = "  this  is my    first example  test";
const char charSeparator = ' ';

const std::string example2 = "I like to makeseperate examples with seperate andseperatethis";
const std::string stringSeparator = "seperate";

void LogStrings(const std::vector<std::string>& strings)
{
	for (const std::string& str : strings)
		std::cout << str << "\n";
	std::cout << "\n";
}

void RunExample1()
{
	std::vector<std::string> seperatedExample = SeparateStringByChar(example1, charSeparator);

	std::cout << "example 1:\n";
	LogStrings(seperatedExample);
}

void RunExample2()
{
	std::vector<std::string> seperatedExample = SeparateStringByString(example2, stringSeparator);

	std::cout << "example 2:\n";
	LogStrings(seperatedExample);
}

int main()
{
	RunExample1();

	RunExample2();

	return 0;
}