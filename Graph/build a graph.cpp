#include<bits/stdc++.h>
using namespace std;

void makegraph(int u,int v, vector<int> g[v])
{
    g[u].push_back(v);
}

void printGraph(vector<int> g[], int v) 
{ 
    for (int ve = 0; ve < v; ve++) 
    { 
        cout << "\n Adjacency list of vertex " << ve ; 
        for (auto x : g[ve]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 

int main()
{
    int v = 5;
    vector<int> g[v];
    makegraph(0,1,g);
    makegraph(1,3,g);
    makegraph(1,4,g);
    makegraph(4,3,g);
    makegraph(3,2,g);
    
    printGraph(g,5);
}
