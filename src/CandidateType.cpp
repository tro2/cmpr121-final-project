#include "CandidateType.h"
#include <string>
#include <iostream>

// Constructor

CandidateType::CandidateType()
{
	totalVotes = 0;
	votesPerCampus[NUM_OF_CAMPUSES] = { 0 };
}


// Accessors

int CandidateType::getTotalVotes() const
{
	return totalVotes;
}

int CandidateType::getVotesByCampus(int campusNumber) const
{
	return votesPerCampus[campusNumber - 1];
}


// Mutators

void CandidateType::updateVotesByCampus(int campusNumber, int newNumOfVotes)
{
	int prevNum = votesPerCampus[campusNumber - 1];

	votesPerCampus[campusNumber - 1] = newNumOfVotes;

	totalVotes -= prevNum;
	totalVotes += newNumOfVotes;
}


// Members

void CandidateType::printCandidateCampusVotes(int campusNumber) const
{
	printName();
	std::cout << std::endl;
	std::cout << "    =>  Campus " << campusNumber << " total votes: " << getVotesByCampus(campusNumber) << std::endl;
}

void CandidateType::printCandidateInfo() const
{
	printSSN();
	std::cout << " - ";
	printName();
	std::cout << std::endl;
}

void CandidateType::printCandidateTotalVotes() const
{
	printName();
	std::cout << std::endl;
	std::cout << "    =>  Total Votes (all campuses): " << getTotalVotes() << std::endl;