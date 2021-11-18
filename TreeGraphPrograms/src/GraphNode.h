#ifndef _GRAPH_NODE_H
#define _GRAPH_NODE_H
namespace graph
{
    class Node 
    { 
    public:
        int value;
        Node * next;
    
        Node(int value, Node *next);
    };
}

#endif