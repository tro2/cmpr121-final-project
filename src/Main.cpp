#include "PersonType.h"
#include <iostream>

int main()
{
	string firstName = "Nathan";
	string lastName = "Stevens";
	int ssn = 999999999;
	
	PersonType test(firstName, lastName, ssn);

	test.printPersonInfo();
	cout << endl;

	return 0;
}
