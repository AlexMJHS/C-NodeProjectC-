/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: Alejandro Magallanes
 *      Version: 0.1
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include <iostream>

#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
	int size;
	int length;
	ArrayNode<Type> * head;
public:
	CTECArray();
	virtual ~CTECArray();
	int getSize();
	Type* get(int position);
	void set(int position, Type value);
};

#endif /* MODEL_CTECARRAY_H_ */