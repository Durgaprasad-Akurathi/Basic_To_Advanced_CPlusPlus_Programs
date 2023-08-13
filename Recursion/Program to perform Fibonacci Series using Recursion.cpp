#include<bits/stdc++.h>
using namespace std;

int fib(int x)
{
    if(x<=1)
    return x;
    else return fib(x-1)+fib(x-2);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    cout<<fib(i)<<" ";
    cout<<"\n";
    cout<<fib(n);
}
