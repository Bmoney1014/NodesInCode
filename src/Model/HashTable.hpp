//
//  HashTable.hpp
//  NodesInCode
//
//  Created by Hostetter, Brock on 5/5/16.
//  Copyright © 2016 The Skate Badger. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp
#include "HashNode.cpp"
#include "CTECList.cpp"

namespace CTECData
{
    template <class Type>
    class HashTable
    {
    private:
        int size;
        int capacity;
        HashNode<Type> ** internalStorage;
        
        int chainedCapacity;
        int chainedSize;
        CTECList<HashNode <Type>> * tableStorage;
        void updateChainedCapacity();
        
        double efficiencyPercentage;//
        
        int findPosition(HashNode<Type> currentNode);//
        int handleCollision(HashNode<Type>  currentNode); //
        int tableCapacity;
        int tableSize;
        
        void updateSize();//
        void updateTableCapacity(); //
        
        int getNextPrime();//
        bool isPrime(int candidateNumber);//
    public:
        HashTable();//
        ~HashTable();//
        int getSize();//
        void add(HashNode<Type> currentNode);//
        bool remove(HashNode<Type> currentNode);//
        bool contains(HashNode<Type> currentNode);//
        void addToTable(HashNode<Type> currentNode); //
    };
}

#endif /* HashTable_hpp */
