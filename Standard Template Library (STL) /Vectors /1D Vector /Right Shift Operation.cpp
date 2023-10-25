#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n, RightShift;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter how many right shift operation you want to perform:";
    cin>>RightShift;
    vector<int> v;
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    while(RightShift--)
    {
        int temp=v[n-1];
        for(int i=n-1; i>=0; i--)
            v[i+1]=v[i];
        v[0]=temp;
    }

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}

////////////////////////////////////////////////////////////////////////////// Another Operation //////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int a,RightShift;
    vector<int> v;
    cout<<"Enter the array elements:";
    while(cin>>a)
    {
        v.push_back(a);
        if(cin.get()=='\n')
            break;
    }
    int n=v.size();
    cout<<"Enter how many times you want to perform Right Shift Operation:";
    cin>>RightShift;

    if(RightShift>n)
        RightShift%=n;
    for(int i=0; i<n; i++)
    {
        int temp=((i-RightShift)+n)%n;
        cout<<v[temp]<<" ";
    }
}
