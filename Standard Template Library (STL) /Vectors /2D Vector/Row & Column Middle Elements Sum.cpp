#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> v(r, vector<int> (c));
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin>>v[i][j];

    int rmid=r/2, cmid=c/2, rsum=0, csum=0;
    for(int j=0; j<c; j++)
    rsum+=v[rmid][j];
    for(int i=0; i<r; i++)
    csum+=v[i][cmid];
    cout<<rsum<<" "<<endl;
    cout<<csum<<" "<<endl;
}
