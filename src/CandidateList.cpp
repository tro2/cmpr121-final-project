#include "CandidateList.h"
#include <iostream>
#include <string>

//Constructor

CandidateList::CandidateList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}


// Destructor

CandidateList::~CandidateList()
{
	destroyList();
}


// Accessors

int CandidateList::getWinner() const //QUESTION what if 2 people with the same number of votes?
{
	if (count == 0)
	{
		std::cout << "=> List is empty" << std::endl;
		return 0; // error code for the driver program
	}

	Node* current = first;
	Node* largest = current;

	while (current != nullptr) // while not at the end of the list
	{
		if (current->getCandidate().getTotalVotes() > largest->getCandidate().getTotalVotes())
		{
			largest = current;
		}

		current = current->getLink(); // go to next candidate
	}

	return largest->getCandidate().getSSN();
}

bool CandidateList::searchCandidate(int ssn) const
{
	if (count == 0)
	{
		std::cout << "=> List is empty" << std::endl;
		return false;
	}
	
	Node* current = first;

	while (current->getCandidate().getSSN() != ssn) // while current isn't the desired candidate
	{
		current = current->getLink(); // go to the next candidate
	}

	if (current == nullptr) // candidate wasn't found (node at end of the array has null link)
	{
		std::cout << "=> SSN not in the list" << std::endl;
		return false;
	}
	else
	{
		return true;
	}
}


// Mutators

void CandidateList::addCandidate(const CandidateType& candidate)
{
	Node* newNode = new Node(candidate, nullptr);

	if (count == 0)
	{
		first = newNode; // only update the first node if list was empty
	}
	else
	{
		last->setLink(newNode); // links old last element to new last element
	}

	last = newNode; // updates last node pointer on the list

	count++;
}

void CandidateList::destroyList()
{
	Node* toDestroy = first;
	
	while (toDestroy != nullptr) // can also loop from 0 to i < count
	{
		Node* next = toDestroy->getLink();
		delete toDestroy;
		toDestroy = next;
	}

	first = nullptr;
	last = nullptr;
	count = 0;
}


// Members

void CandidateList::printAllCandidates() const
{
	if (count == 0)
	{
		std::cout << "=> List is empty." << std::endl;
		return;
	}

	Node* current = first;
	
	while (current != nullptr)
	{
		current->getCandidate().printCandidateInfo();
		current = current->getLink();
	}
}

void CandidateList::printCandidateCampusVotes(int ssn, int campusNumber) const
{
	if (count == 0)
	{
		std::cout << "=> List is empty" << std::endl;
		return;
	}

	Node* current = first;

	while (current->getCandidate().getSSN() != ssn) // while current isn't the desired candidate
	{
		current = current->getLink(); // go to the next candidate
	}

	if (current == nullptr) // candidate wasn't found (node at end of the array has null link)
	{
		std::cout << "=> SSN not in the list" << std::endl;
		return;
	}

	CandidateType candidate = current->getCandidate();

	std::cout << "    =>  Campus " << campusNumber << " total votes: " << candidate.getVotesByCampus(campusNumber) << std::endl;
}

void CandidateList::printCandidateName(int ssn) const
{
	if (count == 0)
	{
		std::cout << "=> List is empty" << std::endl;
		return;
	}

	Node* current = first;

	while (current->getCandidate().getSSN() != ssn) // while current isn't the desired candidate
	{
		current = current->getLink(); // go to the next candidate
	}

	if (current == nullptr) // candidate wasn't found (node at end of the array has null link)
	{
		std::cout << "=> SSN not in the list" << std::endl;
		return;
	}

	CandidateType candidate = current->getCandidate();

	candidate.printName(); // PersonType class function
}

void CandidateList::printCandidateTotalVotes(int ssn) const
{
	if (count == 0)
	{
		std::cout << "=> List is empty" << std::endl;
		return;
	}

	Node* current = first;

	while (current->getCandidate().getSSN() != ssn) // while current isn't the desired candidate
	{
		current = current->getLink(); // go to the next candidate
	}

	if (current == nullptr) // candidate wasn't found (node at end of the array has null link)
	{
		std::cout << "=> SSN not in the list" << std::endl;
		return;
	}

	CandidateType candidate = current->getCandidate();

	std::cout << "    =>  Total Votes (all campuses): " << candidate.getTotalVotes() << std::endl;
}

void CandidateList::printFinalResults() const // function is not in spec
{
	if (count == 0)
	{
		std::cout << "=> List is empty" << std::endl;
		return;
	}

	Node* current = first;

	while (current != nullptr)
	{
		current->getCandidate().printCandidateTotalVotes();
		current = current->getLink();
	}
}