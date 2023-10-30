#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> v[n+1];
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1; i<=n; i++)
    {
        cout<<i<<"->";
        for(int j=0; j<v[i].size(); j++)
        cout<<v[i][j]<<" ";
        cout<<"\n";
    }
}
