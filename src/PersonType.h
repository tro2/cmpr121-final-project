#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
using namespace std;

class PersonType
{
private:
	string firstName; // first name
	string lastName; // last name
	int ssn; // social security number

public:

	// Constructors

	/*
	 * @brief Initializes a PersonType object and sets ssn to 0, firstName and lastName are automatically initialized to empty strings
	 */
	PersonType();

	/*
	 * @brief Initializes a PersonType object and sets the first name, the last name, and the social security number of a person to the values passed
	 * 
	 * @param firstName - first name
	 * @param lastName - last name
	 * @param ssn - social security number
	 */
	PersonType(const string& firstName, const string& lastName, int ssn); //QUESTION store references? or ensure true encapsulation?


	// Mutators
	
	/*
	 * @brief Re-sets the first name, the last name, and the social security number of a person to the new values passed
	 * 
	 * @param firstName - first name
	 * @param lastName - last name
	 * @param ssn - social security number
	 * 
	 * @return void
	 */
	void setPersonInfo(const string& firstName, const string& lastName, int ssn);


	// Accessors

	/*
	 * @brief Accesses PersonType::firstName
	 *
	 * @return const reference to firstName
	 */
	const string& getFirstName() const;

	/*
	 * @brief Accesses PersonType::lastName
	 *
	 * @return const reference to lastName
	 */
	const string& getLastName() const;

	/*
	 * @brief Accesses PersonType::ssn
	 *
	 * @return int PersonType::ssn
	 */
	int getSSN() const;

	/*
	 * @brief Prints the person’s last and first name in the following format:
		firstName, lastName
	 * 
	 * @return void
	 */
	void printName() const;

	/*
	 * @brief Prints the person’s ssn, first name, and last name in the following format:
		###-##-#### firstName lastName
	 *
	 * @return void
	 */
	void printPersonInfo() const;

	/*
	 * @brief Prints the person's ssn in the following format:
	 	###-###-#### or does nothing if the ssn is invalid
	 * 
	 * @return void
	 */
	void printSSN() const;


	// Destructor

	~PersonType() {}

};

#endif
