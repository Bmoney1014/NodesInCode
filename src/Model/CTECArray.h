/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: bhos1889
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "Node.h"
#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
	int size;
    ArrayNode<Type> * head;
public:
    int indexOf(Type value);
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	Type get(int position);
	void set(int position, const Type& value);
};




#endif /* MODEL_CTECARRAY_H_ */
