#include "bits/stdc++.h"
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows & columns:";
    cin>>r>>c;
    vector<vector<int>> v(r, vector<int> (c));
    cout<<"Enter the Matrix elements:";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
        cin>>v[i][j];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cout<<v[j][i]<<" ";
        cout<<endl;
    }
}
