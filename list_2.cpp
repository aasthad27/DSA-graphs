#include<iostream>  // undirected graph -->SC->o(E)-->E is the  number of edges 
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        // u-->v v is neibour of u 
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        
    }
}