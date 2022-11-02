#include "PersonType.h"
#include <iostream>

int main()
{
	string firstName = "Nathan";
	string lastName = "Stevens";
	int ssn = 1234567890;
	
	PersonType test{ firstName, lastName, ssn };

	test.printName();

	cout << endl;

	test.printSSN();

	cout << endl;
	test.printPersonInfo();
	cout << endl;

	return 0;
}
