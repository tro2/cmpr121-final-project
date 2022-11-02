#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
using namespace std;

class PersonType
{
private:
	string firstName;
	string lastName;
	int ssn;

public:

	// Constructors

	PersonType();

	PersonType(const string& firstName, const string& lastName, int ssn); //QUESTION store references? or ensure true encapsulation?


	// Mutators
	
	void setPersonInfo(const string& firstName, const string& lastName, int ssn);


	// Accessors

	const string& getFirstName() const;

	const string& getLastName() const;

	int getSSN() const;

	void printName() const;

	void printPersonInfo() const;

	void printSSN() const;


	// Destructor

	~PersonType() {}

};

#endif
