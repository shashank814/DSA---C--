#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph {
    int V;             // It defines number of vertices
    list<int> *l;     // dynamic arr for lists -> int *arr(dynamic arr)

public:
    Graph(int V) {
        this->V = V;      // initialise with vertices value
        l = new list<int> [V];  // initialise list with new list of integer of size V(size of vertices)
    };

    void addEdge(int u, int v) {
        l[u].push_back(v);    // establish undirected edge between two nodes (u---v)
        l[v].push_back(u);
    }

    void printAdjList() {
        for(int i=0; i<V; i++) {
            cout << i << " : ";
            for(int neighbour : l[i]) {
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);

    g.printAdjList();

    return 0;
}