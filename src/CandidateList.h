#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "CandidateType.h"

class CandidateList
{
	class Node
	{
	public:
		Node() : link(nullptr) {}
		Node(const CandidateType& votes, Node* theLink)
			: candidate(votes), link(theLink) {}
		Node* getLink() const { return link; }
		CandidateType getCandidate() const { return candidate; }
		void setCandidate(const CandidateType& votes) { candidate = votes; }
		void setLink(Node* theLink) { link = theLink; }
		~Node() {}
	private:
		CandidateType candidate;
		Node* link; //pointer that points to next node
	};

private:

	Node* first;
	Node* last;
	int count;

public:

	//Constructor

	CandidateList();


	// Destructor

	~CandidateList();

	
	// Accessors

	int getWinner() const;

	const CandidateType& searchCandidate(int ssn) const;


	// Mutators

	void addCandidate(const CandidateType& candidate);

	void destroyList();


	// Members

	void printAllCandidates() const;

	void printCandidateCampusVotes(int ssn, int campusNumber) const;

	void printCandidateName(int ssn) const;

	void printCandidateTotalVotes(int ssn) const;

};

#endif // !CANDIDATELIST_H
