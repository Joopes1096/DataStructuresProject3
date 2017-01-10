#include <iostream>
#include <fstream>
#include "graphType.h"
 
using namespace std;

int main()
{
    graphType graph(40);
    graph.createGraph();
    graph.printGraph();
    graph.depthFirstTraversal();
    cout << endl << endl << endl;
    graph.breadthFirstTraversal();
    return 0;
}
