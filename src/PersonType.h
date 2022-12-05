#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>

class PersonType
{
private:
	std::string firstName; // first name
	std::string lastName; // last name
	int ssn; // social security number

public:

	// Constructors

	PersonType();

	PersonType(const std::string& firstName, const std::string& lastName, int ssn);


	// Accessors

	const std::string& getFirstName() const;

	const std::string& getLastName() const;

	int getSSN() const;


	// Mutators
	
	void setPersonInfo(const std::string& firstName, const std::string& lastName, int ssn);


	// Methods

	void printName() const;

	void printPersonInfo() const;

	void printSSN() const;


	// Destructor

	~PersonType() {}

};

#endif
