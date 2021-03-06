/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: amag6880
 */

#include "CTECList.h"
#include <assert.h>

template <class Type>
CTECList<Type>:: CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template <class Type>
CTECList<Type>::~CTECList()
{

}

template<class Type>
int CTECList<Type>:: getSize()
{
	return size;
}

template<class Type>
void CTECList<Type>:: addToFront(const Type& value)
{
	ArrayNode<Type> * newNode;

	newNode = new ArrayNode<Type>;
	newNode -> value = value; //store the new value in the node
	newNode -> next = head; //insert newNode before first
	head = newNode; //make first point to the actual first node
	size++; // increment count
	if(end == NULL) //If the list was empty, newNode is also the last node in the list
	{
		end = newNode;
	}
}

template<class Type>
void CTECList<Type>:: addToEnd(const Type& value)
{
	ArrayNode<Type> * newNode;

	newNode = new ArrayNode<Type>;
	newNode -> value = value;
	newNode -> next = NULL;

	if(head == NULL) //If the list is empty, newNode is both the first and last node
	{
		head = newNode;
		end = newNode;
		size++;
	}
	else //The list is not empty, insert newNode after last
	{
		end -> next = newNode; //Insert newNode after last
		end = newNode; //Make last point to the actual last node in the list
		size++;
	}
}

template<class Type>
void CTECList<Type>:: addAtIndex(int index, const Type& value)
{

}

template<class Type>
Type CTECList<Type>:: getFront()
{
	assert(head != NULL);

	return head -> value; //return the info of the first node
}

template<class Type>
Type CTECList<Type>:: getEnd()
{
	assert(end != NULL);

	return end -> value; //return the info of the last node
}

template<class Type>
Type CTECList<Type>:: getFromIndex(int index)
{

}

template <class Type>
Type CTECList<Type>:: removeFromFront()
{
	Type thingToRemove; //In case we need to use the value we are removing
	assert(size > 0);
	//Create a pointer to what is after head.
	//Find the next spot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead= head->getNext();
	//Get what was in the head node
	thingToRemove = head -> getValue();
	//Delete what head is pointing to
	//Remove head
	delete head;
	//Set head to the new head
	//Move head to the next spot
	head = newHead;

	size--;

	this -> calculateSize();
	return thingToRemove;
}

template <class Type>
Type CTECList<Type>:: removeFromEnd()
{
	assert(size > 0);
	Type thingToRemove;

	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();

	//Loop over size
	//or
	//Loop until getNext()->getNext() == nullptr
	//Before return the variable call calculatedSize()
	while(head -> getNext() -> getNext() != nullptr)
	{

	}

	this -> calculateSize();
	return thingToRemove;
}

template<class Type>
Type CTECList<Type>:: removeFromIndex(int index)
{
	Type thingToRemove;

	assert(size > 0);
	assert(index >= 0);
	assert(index < size);
	assert(size > 0 && index >= 0 && index < size); //Same as the three above

	ArrayNode<Type> * previous, deleteMe, newNext;
	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size - 1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot < index + 1; spot++)
		{

		}
	}

	this -> calculateSize();
	return thingToRemove;
}

/**
 * Calculates the size of the list by iterating over all of the nodes in the list
 */
template<class Type>
void CTECList<Type>:: calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 0;
	if(counterPointer == nullptr)
	{
		this -> size = 0;
		return;
	}
	else
	{
		count ++;
		while(counterPointer -> getNext() != nullptr)
			{
				counterPointer = counterPointer -> getNext();
				count ++;
			}
		this -> size = count;
	}

}

template<class Type>
Type CTECList<Type>:: set(int index, const Type& value)
{

}
