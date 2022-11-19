#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
private:

	int totalVotes; // total votes for the candidate
	int votesPerCampus[NUM_OF_CAMPUSES]; // array of votes per campusd

public:

	// Constructors

	CandidateType();


	// Destructor

	~CandidateType() {}


	// Accessors

	int getTotalVotes() const;

	int getVotesByCampus(int campusNumber) const;


	// Mutators

	void updateVotesByCampus(int campusNumber, int numOfVotes);


	// Members

	void printCandidateCampusVotes(int campusNumber) const;

	void printCandidateInfo() const;

	void printCandidateTotalVotes() const;

};

#endif // end CANDIDATETYPE_H
