#include "LinkedList.h"

#include <iostream>
using namespace std;

template<typename T>
LinkedListNode<T>::LinkedListNode(T value)
{
    this->value = value;
}

template<typename T>
void LinkedListNode<T>::print(){
    cout << value;
}

template <typename Z>
void LinkedList<Z>::insert(Z item)
{
        LinkedListNode<Z> newItem = new LinkedListNode<Z>(item);
        if(first == NULL){
            first = item;
            last = item;
            return;
        }
        LinkedListNode<Z> * current = first;
        while (current->next != NULL)
        {
            current = current-> next;
        }
        current->next = newItem;
        last = newItem;
}

template <typename Z>
Z LinkedList<Z>::removeLast()
{
    LinkedListNode<Z> * current = first;
    while (current->next != last)
    {
        current = current->next;
    }
    Z temp = current->next;
    current->next = NULL;
    return temp;        
}

template <typename Z>
void LinkedList<Z>::print()
{
    LinkedListNode<Z> *current = this->first;
    // while ()
    // {
    //     current.print();
    // }
}


