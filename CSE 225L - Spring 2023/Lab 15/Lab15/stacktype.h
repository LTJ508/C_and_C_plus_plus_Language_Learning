#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

#include <iostream>
using namespace std;

class FullStack{

};

class EmptyStack{

};

template <class ItemType>
class StackType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
private:
    NodeType* topPtr;
};

#endif // STACKTYPE_H_INCLUDED
