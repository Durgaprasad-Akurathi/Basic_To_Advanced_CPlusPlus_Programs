#include<bits/stdc++.h>
using namespace std;

int maxi(int a, int b)
{
    return (a>b)? a: b;
}

int mini(int a, int b)
{
    return (a<b)?a:b;
}

int main()
{
    int (*p)(int, int);
    p=maxi;
    cout<<(*p)(10,5)<<endl;
    
    p=mini;
    cout<<(*p)(5, 10);
}
