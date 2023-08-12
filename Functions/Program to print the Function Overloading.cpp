#include<bits/stdc++.h>
using namespace std;

int add(int x, int y)
{
    return x+y;
}

int add(int x, int y, int z)
{
    return x+y+z;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=add(a,b);
    d=add(a,b,c);
    cout<<c<<" "<<d;
}
