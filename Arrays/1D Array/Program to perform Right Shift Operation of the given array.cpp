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

///////////////////////////////////////////////////////////////////////////////// Another Method ///////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n, RightShift;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter how many right shift operation you want to perform:";
    cin>>RightShift;
    int a[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    cin>>a[i];

    while(RightShift--)
    {
        int temp=a[n-1];
        for(int i=n-1; i>=0; i--)
            a[i+1]=a[i];
        a[0]=temp;
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
