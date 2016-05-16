//
//  HashNode.cpp
//  NodesInCode
//
//  Created by Hostetter, Brock on 5/9/16.
//  Copyright © 2016 The Skate Badger. All rights reserved.
//

#include "HashNode.hpp"

using namespace CTECData;

template <class Type>
HashNode<Type> :: HashNode()
{

}


    template <class Type>
    HashNode<Type> :: HashNode(int key, const Type& value)
    {
        this->key = key;
        this->value = value;
    }

    template<class Type>
    void HashNode<Type> :: setKey(int key)
    {
        this->key = key;
    }

    template<class Type>
    int HashNode<Type> :: getKey()
    {
        return this->key;
    }
    template <class Type>
    void HashNode<Type> :: setValue(Type value)
    {
    
    }

    template <class Type>
    Type HashNode<Type> :: getValue()
    {
        
    }
