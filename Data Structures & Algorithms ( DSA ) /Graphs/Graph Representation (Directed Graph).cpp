#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v[n+1];
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
//        v[y].push_back(x);
    }

    for(int i=1; i<=n; i++)
    {
        cout<<i<<"->";
        for(int j=0; j<v[i].size(); j++)
            cout<<v[i][j]<<" ";
        cout<<"\n";
    }
}
