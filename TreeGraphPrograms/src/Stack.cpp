#include <iostream>
#include "LinkedList.cpp"

template <class T>
class Stack {
 LinkedList<T> array = LinkedList();
    public:
    void push(T item) {
        array.insert(item);
    } 

    T pop() {
        return array.removeLast()
    }

};