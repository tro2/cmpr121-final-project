#include "PersonType.h"
#include <iostream>

int main()
{
	std::string firstName = "Nathan";
	std::string lastName = "Stevens";
	int ssn = 999999999;
	
	PersonType test(firstName, lastName, ssn);

	test.printPersonInfo();
	std::cout << std::endl;

	return 0;
}
