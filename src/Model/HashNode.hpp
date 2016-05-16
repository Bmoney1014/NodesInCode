//
//  HashNode.hpp
//  NodesInCode
//
//  Created by Hostetter, Brock on 5/9/16.
//  Copyright © 2016 The Skate Badger. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp
#include <iostream>

namespace CTECData
{
    template <class Type>
    class HashNode
    {
    private:
        int key;
        Type value;
        
    public:
        HashNode();
        HashNode(int key, const Type& value);
        void setKey(int key);
        void setValue(Type value);
        int getKey();
        int setKey();
        Type getValue();
    };
}
#endif /* HashNode_hpp */
