#include "Graph.hpp"
#include <string>

int main(void) {

    Graph<std::string> knowledge;
    knowledge.insertVertex("A");
    knowledge.insertVertex("B");
    knowledge.insertVertex("C");
    knowledge.insertVertex("D");
    knowledge.insertVertex("E");
    knowledge.insertVertex("F");
    knowledge.insertVertex("G");
    knowledge.insertVertex("S");
    knowledge.insertVertex("H");

    knowledge.insertEdge("A", "B");
    knowledge.insertEdge("A", "S");
    knowledge.insertEdge("C", "S");
    knowledge.insertEdge("G", "S");
    knowledge.insertEdge("C", "F");
    knowledge.insertEdge("C", "E");
    knowledge.insertEdge("C", "D");
    knowledge.insertEdge("E", "H");
    knowledge.insertEdge("G", "H");
    knowledge.insertEdge("F", "G");


    //knowledge.print();
    //knowledge.DFS();

    
    //  TODO 
    //  1. Create a disconnected Graph
    //  2. Update DFS to traverse all the nodes of this graph
    
    Graph<std::string> disco;

    disco.insertVertex("A");
    disco.insertVertex("B");
    disco.insertVertex("C");
    disco.insertVertex("D");
    disco.insertVertex("Z");
    disco.insertVertex("E");
    disco.insertVertex("F");
    disco.insertVertex("G");
    disco.insertVertex("H");

    disco.insertEdge("A", "B");
    disco.insertEdge("B", "C");
    disco.insertEdge("B", "D");
    disco.insertEdge("D", "E");
    disco.insertEdge("F", "G");
    disco.insertEdge("G", "H");

    disco.insertVertex("P");
    disco.insertVertex("R");
    disco.insertVertex("Z");
    disco.insertVertex("I");

    disco.insertEdge("P", "I");
    disco.insertEdge("D", "I");
    disco.insertEdge("R", "D");
    disco.insertEdge("R", "E");
    disco.insertEdge("P", "I");
    
    disco.print();
    std::cout << "===========DFS=========" << std::endl;
    disco.DFS();



    return 0;
}