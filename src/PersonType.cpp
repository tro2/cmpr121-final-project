#include "PersonType.h"
#include <iostream>

// Constructors

PersonType::PersonType()
{
	this->ssn = 0;
}

PersonType::PersonType(const std::string& firstName, const std::string& lastName, int ssn)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->ssn = ssn;
}


// Accessors

const std::string& PersonType::getFirstName() const
{
	return firstName;
}

const std::string& PersonType::getLastName() const
{
	return lastName;
}

int PersonType::getSSN() const
{
	return ssn;
}


// Mutators

void PersonType::setPersonInfo(const std::string& firstName, const std::string& lastName, int ssn)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->ssn = ssn;
}


// Methods

void PersonType::printName() const
{
	std::cout << lastName << ", " << firstName;
}

void PersonType::printPersonInfo() const
{
	printSSN();
	std::cout << " " << firstName << " " << lastName;
}

void PersonType::printSSN() const
{
	std::string s = std::to_string(ssn);

	s.insert(3, "-");
	s.insert(6, "-");

	std::cout << s;
}
