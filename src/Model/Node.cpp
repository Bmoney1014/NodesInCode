/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bhos1889
 */

#include "Node.h"
#include <iostream>
//using namespace std;

template <class Type>
Node<Type>::Node()
{
    this->value = value;
	pointers = nullptr;

}

template <class Type>
Node<Type>::Node(Type value)
{
	this->value = value;
	pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{

}

template <class Type>
Type Node<Type> :: getValue()
{
	return this->value;
}

template <class Type>

Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}
