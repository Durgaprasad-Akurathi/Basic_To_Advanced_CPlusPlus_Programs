#include<bits/stdc++.h>
using namespace std;

int min(int x, int y)
{
    if(x<y)
    return x;
    else return y;
}

int min(int x, int y, int z)
{
    if(x<y && x<z)
    return x;
    else if(y<x && y<z)
    return y;
    else return z;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=min(a,b);
    cout<<c<<" ";
    c--;
    d=min(a,b,c);
    cout<<d<<" ";
}
