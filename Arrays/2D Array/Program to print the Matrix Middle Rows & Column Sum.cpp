#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,rsum=0,csum=0;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin>>a[i][j];
    int rmid=r/2, cmid=c/2;
    for(int j=0; j<c; j++)
    rsum+=a[rmid][j];
    for(int i=0; i<r; i++)
    csum+=a[i][cmid];
    cout<<"Row Sum: "<<rsum<<endl;
    cout<<"Column Sum: "<<csum<<endl;
}
