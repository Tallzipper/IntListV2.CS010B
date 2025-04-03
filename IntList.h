#ifndef INTLIST_H
#define INTLIST_H

#include <iostream>
using namespace std;

struct IntNode {
	int value;
	IntNode *next;
	IntNode(int value) : value(value), next(nullptr) { }
};

class IntList {
 private:
	IntNode *head;
	IntNode *tail;
 public:
	IntList(); 													// Initializes an empty list | Done
	~IntList();													// Destructor | Done
	void clear();												// Dealocates all nodes in linked list | Done
	void push_front(int);										// Inserts node to front of the list | Done
	void pop_front();											// Kills the node at the front of the list | Done
	bool empty() const;											// Returns true if list is empty | Done
	const int & front() const;									// Returns the front of the list | Done
	const int & back() const;									// Returns the back of the list | Done
	friend ostream & operator<<(ostream &, const IntList &);	/* Overloads insersion operator. Don't stress. This doesn't get output to a file
																   You're fine. | Done
																*/ 

    // ProAs Below

    IntList(const IntList &cop);                                // Copies the list | N
    IntList & operator=(const IntList &rhs);                    // Perform a deep copy | N
    void push_back(int value);                                  // Add an item to the back of the list using a new node | N
    void selection_sort();                                      // Sort the list | N
    void insert_ordered(int value);                             // Insert the item into the list that has already been sorted | N
    void remove_duplicates();                                   // Just make a copy of the list and remove the duplicates from there? | N

    
};

#endif