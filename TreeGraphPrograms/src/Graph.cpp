#include <iostream>
#include "GraphNode.h"

using namespace std;
using namespace graph;

graph::Node::Node(int value, Node *next)
{
    this->value = value;
    this->next = next;
}

class List{
public:
    graph::Node * head = NULL;
    void add(int value) {
        graph::Node * node = new graph::Node(value, NULL);
        if (head == NULL) {
            this->head = node;
        } else {
            Node * current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = node;
            
        }
    }
void print(){
        Node * current = head;
        cout << "\n";
        while (current != NULL)
        {
            cout  << " -> " << current->value;
            current = current->next;
        }
        cout << "\n";
    }
};

class Graph {
    public:
    int v = 5;
    List *array;
    Graph(int v){
    this->v = v;
    this->array = new List[v];
    for (int i = 0; i < v; i++){
        List *l = new List();
        array[i] = *l;
    }
};

void insertLink(int a, int b) {
    // Node * aNode = new Node(a, NULL);
    // Node * bNode = new Node(b, NULL);
    array[a].add(b);
    array[b].add(a);
}

void print(){
    for(int i = 0; i < v; i++){
        array[i].print();
    }
}

};

