#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,LeftShit;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements which you want to push:";
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Enter how many Left Shift Operations you want to perform:";
    cin>>LeftShit;
    if(LeftShit>n)
    LeftShit=LeftShit%n;

    for(int i=0; i<n; i++)
    {
        int temp=(i+LeftShit)%n;
        cout<<v[temp]<<" ";
    }
}

//////////////////////////////////////////////////////////////////////////////// Another Method /////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n, LeftShift;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter how many left shift operation you want to perform:";
    cin>>LeftShift;
    vector<int> v;
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    while(LeftShift--)
    {
        int temp=v[0];
        for(int i=0; i<n-1; i++)
            v[i]=v[i+1];
        v[n-1]=temp;
    }

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
