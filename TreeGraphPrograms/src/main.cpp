#include <iostream>
#include "Graph.cpp"
// #include "BreadthFirstSearch.cpp"

using namespace std;
Graph createGraph();
int main() {
    Graph graph = createGraph();
    graph.print();
}

Graph createGraph(){
    Graph graph = Graph(4);
    graph.insertLink(0, 1); 
    graph.insertLink(0, 4); 
    graph.insertLink(1, 2); 
    graph.insertLink(1, 3); 
    graph.insertLink(1, 4); 
    graph.insertLink(2, 3); 
    graph.insertLink(3, 4);
    return graph;
}