#include "CandidateList.h"
#include <iostream>

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
		return -1;
	}

	Node* current = first;
	Node* largest = current;

	while (current->getLink() != nullptr) // while not at the end of the list
	{
		current = current->getLink(); // go to next candidate
		if (current->getCandidate().getTotalVotes() > largest->getCandidate().getTotalVotes())
		{
			largest = current;
		}
	}

	return largest->getCandidate().getSSN();
}

const CandidateType& CandidateList::searchCandidate(int ssn) const
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
		return; //QUESTION does the return nullptr?
	}
	else
	{
		return current->getCandidate();
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

}

void CandidateList::printCandidateCampusVotes(int ssn, int campusNumber) const
{

}

void CandidateList::printCandidateName(int ssn) const
{

}

void CandidateList::printCandidateTotalVotes(int ssn) const
{

}