#pragma once
#include "SortedIteratedList.h"

//DO NOT CHANGE THIS PART
class ListIterator{
	friend class SortedIteratedList;
private:
    int currentIndex;
	SortedIteratedList& list;
	ListIterator(SortedIteratedList& list);

	//TODO - Representation
public:
	void first();
	void next();
	bool valid() const;
    TComp getCurrent() const;

    // removes and returns the current element from the iterator
    // after the operation the current element from the Iterator is the next element from the SortedList, or,
    // if the removed element was the last one, the iterator is invalid
    // throws exception if the iterator is invalid
    TComp remove();
};


