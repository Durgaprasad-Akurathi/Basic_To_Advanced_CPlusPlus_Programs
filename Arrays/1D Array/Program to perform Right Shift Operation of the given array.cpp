#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, Rshift;
    cin>>n>>Rshift;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    Rshift=Rshift%n;

    for(int i=0; i<n; i++)
    {
        int temp=(i+Rshift)%n;
        cout<<a[temp]<<" ";
    }

}
