//
//  BinaryTree.hpp
//  NodesInCode
//
//  Created by Hostetter, Brock on 5/13/16.
//  Copyright © 2016 The Skate Badger. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>
namespace CTECData
{
    template<class Type>
    class BinaryTree
    {
    private:
        int calculateSize;
    public:
        BinaryTree();
        ~BinaryTree();
        int remove(BinaryTree<Type> currentNode);
        int contains(BinaryTree<Type> currentNode);
    };
}


#endif /* BinaryTree_hpp */
