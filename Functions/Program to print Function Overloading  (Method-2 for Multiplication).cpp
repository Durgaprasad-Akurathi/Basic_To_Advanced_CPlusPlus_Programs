#include<bits/stdc++.h>
using namespace std;

int mul(int x, int y)
{
    return x*y;
}

int mul(int x, int y, int z)
{
    return x*y*z;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=mul(a,b);
    d=mul(a,b,c);
    cout<<c<<" "<<d;
}
