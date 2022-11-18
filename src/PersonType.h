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

	/** 
	 * @brief Initializes a PersonType object and sets ssn to 0, firstName and lastName are automatically initialized to empty strings
	 */
	PersonType();

	/**
	 * @brief Initializes a PersonType object and sets the first name, the last name, and the social security number of a person to the values passed
	 * 
	 * @param firstName - first name
	 * @param lastName - last name
	 * @param ssn - social security number
	 */
	PersonType(const std::string& firstName, const std::string& lastName, int ssn);


	// Accessors

	/// <summary>
	/// Accesses firstName.
	/// </summary>
	/// <returns>
	/// const reference to firstName
	/// </returns>
	const std::string& getFirstName() const;

	/** 
	 * @ Accesses PersonType::lastName
	 *
	 * @return const reference to lastName
	 */
	const std::string& getLastName() const;

	/** 
	 * @brief Accesses PersonType::ssn
	 *
	 * @return int PersonType::ssn
	 */
	int getSSN() const;


	// Mutators
	
	/** 
	 * @brief Re-sets the first name, the last name, and the social security number of a person to the new values passed
	 * 
	 * @param firstName - first name
	 * @param lastName - last name
	 * @param ssn - social security number
	 * 
	 * @return void
	 */
	void setPersonInfo(const std::string& firstName, const std::string& lastName, int ssn);


	// Methods

	/** 
	 * @brief Prints the person’s last and first name in the following format:
		firstName, lastName
	 * 
	 * @return void
	 */
	void printName() const;

	/** 
	 * @brief Prints the person’s ssn, first name, and last name in the following format:
		###-##-#### firstName lastName
	 *
	 * @return void
	 */
	void printPersonInfo() const;

	/** 
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
