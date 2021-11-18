#ifndef _LINKED_LIST_
#define _LINKED_LIST_

template<class T>
class LinkedListNode
{
public:
    T value;
    LinkedListNode<T> *next;

    LinkedListNode(T value);
    void print();
};

template <class Z>
class LinkedList
{
public:
    LinkedListNode<Z> *first; 
    LinkedListNode<Z> *last;

    void insert(Z item);
    Z removeLast();
    void print();
};


#endif