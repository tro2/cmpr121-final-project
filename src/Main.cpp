#include "PersonType.h"
#include <iostream>

int main()
{
	string firstName = "Nathan";
	string lastName = "Stevens";
	int ssn = 9999999999; //QUESTION int isn't long enough to store all ssn's
	
	PersonType test{ firstName, lastName, ssn };

	test.printPersonInfo();
	cout << endl;

	return 0;
}
