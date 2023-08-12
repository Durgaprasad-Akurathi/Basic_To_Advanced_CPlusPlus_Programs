#include<bits/stdc++.h>
using namespace std;

int add(int x, int y, int z=0)
{
    return x+y+z;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<add(a,b)<<" ";
    cout<<add(a,b,c);
}
