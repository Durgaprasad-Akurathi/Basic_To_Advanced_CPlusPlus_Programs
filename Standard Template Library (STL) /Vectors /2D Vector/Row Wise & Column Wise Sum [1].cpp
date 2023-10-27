#include "bits/stdc++.h"
using namespace std;
int main()
{
    int r, c;
    cout<<"Enter number of rows:";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    vector<vector<int>> v(r, vector<int> (c));
    cout<<"Enter the Matrix Elements:";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>v[i][j];

    int RSum=0, CSum=0, x=1;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            RSum+=v[i][j];
            CSum+=v[j][i];
        }
        cout<<"Row"<<x<<" Sum is:  "<<RSum<<"  &  "<<"Column"<<x<<" sum is:  "<<CSum;
        x++;
        RSum=0, CSum=0;
        cout<<endl;
    }
}
