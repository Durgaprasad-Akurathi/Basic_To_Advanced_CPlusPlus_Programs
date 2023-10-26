#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements which you want to push:";
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i]!=v[i+1])
        cout<<v[i]<<" ";
        else continue;
    }
}
