#include "bits/stdc++.h"
using namespace std;

int RowSum(vector<vector<int>> v, int c, int row)
{
    int RSum=0;
    for(int j=0; j<c; j++)
        RSum+=v[row][j];
    return RSum;
}

int ColumnSum(vector<vector<int>> v, int r, int column)
{
    int CSum=0;
    for(int i=0; i<r; i++)
        CSum+=v[i][column];
    return CSum;
}

int main()
{
    int r,c;
    cout<<"Enter the number of rows & columns:";
    cin>>r>>c;
    vector<vector<int>> v(r, vector<int> (c));
    cout<<"Enter the Matrix elements:"<<"\n";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>v[i][j];

    for(int i=0; i<r; i++)
    {
        cout<<"Row"<<i+1<<" Sum is: "<< RowSum(v, c, i)<<endl;
        cout<<"Column"<<i+1<<" Sum is: "<< ColumnSum(v, r, i)<<endl;
    }
}
