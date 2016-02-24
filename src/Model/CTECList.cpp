/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: amag6880
 */

#include "CTECList.h"

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template <class Type>
CTECList<Type>::~CTECList()
{

}

template <class Type>
Type CTECList<Type>:: removeFromFront()
{
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead= head->getNext();
	//Delete what head is pointing to
	delete this->head;
	head = newHead;
	//Set head to the new head
	this->head = newHead;
}

template <class Type>
Type CTECList<Type>:: removeFromEnd()
{
	//Loop over size
	//or
	//Loop until getNext->getNext() == nullptr
}
