#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, Lshift;
    cin>>n>>Lshift;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    Lshift=Lshift%n;

    for(int i=0; i<n; i++)
    {
        int temp=(i-Lshift+n)%n;
        cout<<a[temp]<<" ";
    }

}
