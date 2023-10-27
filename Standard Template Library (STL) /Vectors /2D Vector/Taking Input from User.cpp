#include "bits/stdc++.h"
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number of rows:";
    cin>>r;
    cout<<"Enter number of columns:";
    cin>>c;
    vector<vector<int>> v(r, vector<int>(c));
    cout<<"Enter the elements:";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
           cin>>v[i][j];

    cout<<"Entered Matrix elements are:"<<"\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
