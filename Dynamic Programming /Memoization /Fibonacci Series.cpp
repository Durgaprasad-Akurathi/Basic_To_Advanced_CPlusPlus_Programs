#include "bits/stdc++.h"
using namespace std;

int fib(vector<int> &dp, int n)
{
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fib(dp, n-1)+fib(dp, n-2);
}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    for(int i=0; i<=n; i++)
    cout<<fib(dp, i)<<" ";

    cout<<'\n'<<fib(dp, n);
}
