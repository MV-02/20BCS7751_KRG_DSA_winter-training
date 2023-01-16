#include <bits/stdc++.h>
using namespace std;

// Add edge
void addEdge(vector<char> adj[], char s, char d)
{
    adj[s-65].push_back(d);
    adj[d-65].push_back(s);
}

// Print the graph
void printGraph(vector<char> adj[], int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "\n Vertex "
             << char(d+65) << ":";
        for (char x : adj[d])
            cout << "-> " << x;
        printf("\n");
    }
}

int main()
{
    char V = 6;

    // Create a graph
    vector<char> adj[V];

    // Add edges
    addEdge(adj, 'A', 'B');
    addEdge(adj, 'A', 'D');
    addEdge(adj, 'B', 'C');
    addEdge(adj, 'B', 'D');
    addEdge(adj, 'D', 'E');
    addEdge(adj, 'C', 'E');

    printGraph(adj,V);
}