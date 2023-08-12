#include<bits/stdc++.h>
using namespace std;

int add(int x, int y, int z)
{
    return x+y+z;
}

int mul(int x, int y, int z)
{
    return x*y*z;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=add(a, b, c);
    cout<<d<<" ";
    d=mul(a, b, c);
    cout<<d;
}
