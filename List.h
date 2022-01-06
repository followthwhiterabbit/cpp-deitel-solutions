// template list class definition 
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h"
using namespace std; 

template<typename NODETYPE>
class List
{
public:
	List(); // constuctor 
	~List(); // destructor
	void insertAtFront(const NODETYPE&); 
	void insertAtBack(const NODETYPE&); 
	bool removeFromFront(NODETYPE&);
	bool removeFromBack(NODETYPE&); 
	bool isEmpty() const; 
	void print() const; 
private:
	ListNode<NODETYPE>* firstPtr; // pointer to first node
	ListNode<NODETYPE>* lastPtr; // pointer to last node

	// utility function to allocate new node
	ListNode<NODETYPE>* getNewNode(const NODETYPE&); 
}; // end class list

// default constructor
template<typename NODETYPE>
List<NODETYPE>::List()
	: firstPtr(0), lastPtr(0)
{
	// empty body 
} // end list constructor

// destructor
template<typename NODETYPE>
List<NODETYPE>::~List()
{
	if (!isEmpty()) // List is not empty 
	{
		cout << "Destroying nodes ...\n"; 

		ListNode<NODETYPE>* currentPtr = firstPtr;
		ListNode<NODETYPE>* tempPtr; 

		while (currentPtr != 0) // delete remaining nodes
		{
			tempPtr = currentPtr; 
			cout << tempPtr->data << '\n'; 
			currentPtr = currentPtr->nextPtr; 
			delete tempPtr; 
		} // end while

	} // end if 

	cout << "all nodes destroyed\n\n"; 

} // end list destructor


// insert node at front of list
template<typename NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE& value)
{
	ListNode<NODETYPE>* newPtr = getNewNode(value); // new node

	if (isEmpty()) // list is empty 
		firstPtr = lastPtr = newPtr; // new list has only one node
	else // list is not empty 
	{
		newPtr->nextPtr = firstPtr; // point new node to previos first node
		firstPtr = newPtr; // aim firstPtr at new node
	} // end else

} // end function insertAtFront 

// insert node at the back of list
template<typename NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE& value)
{
	ListNode<NODETYPE>* newPtr = getNewNode(value); // new node

	if (isEmpty()) // list is empty
		firstPtr = lastPtr = newPtr; // new list has only one mode
	else
	{
		lastPtr->nextPtr = newPtr; // update previous last node
		lastPtr = newPtr; // new last node
	} // end else
	


} // end function insertAtBack 



  // delete node from back of list
template <typename NODETYPE>
bool List<NODETYPE>::removeFromBack(NODETYPE &value)
{
	if (isEmpty()) // list is empty 
		return false;
	else
	{
		ListNode<NODETYPE>* tempPtr = lastPtr; // hold tempPtr to delete

		if (firstPtr == lastPtr) // List has one element 
			firstPtr = lastPtr = 0; // no nodes remain after removal 
		else
		{
			ListNode<NODETYPE>* currentPtr = firstPtr; 

			// locate second-to-last element 
			while (currentPtr->nextPtr != lastPtr)
				currentPtr = currentPtr->nextPtr; // move to next node
			
			lastPtr = currentPtr; // remove last node
			currentPtr->nextPtr = 0; // this is now the last node
		} // end else

		value = tempPtr->data; 
		delete tempPtr; // reclaim former last node
		return true; 

	} // end else

} // end function removeFromBack


template <typename NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE& value)
{
	if (isEmpty())
		return false;
	else
	{
		ListNode<NODETYPE>* tempPtr = firstPtr; // hold tempPtr to delete
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0; // no nodes remain after removal
		else
			firstPtr = firstPtr->nextPtr; // point to previous 2nd node

		value = tempPtr->data; // return data being removed
		delete tempPtr; // reclaim previous front node
		return true; // delete successful 

	} // end else
} // end function removeFromFront 

// is list empty
template <typename NODETYPE>
bool List<NODETYPE>::isEmpty() const
{
	return firstPtr == 0; 
}








template<typename NODETYPE>
ListNode <NODETYPE>* List< NODETYPE >::getNewNode(
	const NODETYPE& value)
{
	return new ListNode<NODETYPE>(value); 
} // end function getNewNode

// display contents of the list
template <typename NODETYPE>
void List< NODETYPE >::print() const
{
	if (isEmpty()) // list is empty 
	{
		cout << "the list is empty\n\n"; 
		return;
	} // end if 

	ListNode< NODETYPE >* currentPtr = firstPtr; 

	cout << "the list is: "; 

	while (currentPtr != 0) // get element data
	{
		cout << currentPtr->data << ' '; 
		currentPtr = currentPtr->nextPtr; 
	} // end while 

	cout << "\n\n"; 


} // end function print 



#endif // !LIST_h
