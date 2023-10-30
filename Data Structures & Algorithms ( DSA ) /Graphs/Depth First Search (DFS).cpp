#include "bits/stdc++.h"
using namespace std;
vector<int> v[10001];

void DFS(int present, vector<bool>& visited)
{
    visited[present]=true;
    cout<<present<<" ";
    for(int i=0; i<v[present].size(); i++)
    {
        if(visited[v[present][i]]==false)
            DFS(v[present][i], visited);
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    vector<bool> visited(n+1, false);
    bool status=true;
    DFS(1, visited);
}
