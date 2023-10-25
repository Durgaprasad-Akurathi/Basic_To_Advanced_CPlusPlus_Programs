#include "bits/stdc++.h"
using namespace std;

int PosCount(vector<int> v)
{
    int count1=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=0)
            count1++;
    }
    return count1;
}
int NegCount(vector<int> v)
{
    int count2=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]<0)
            count2++;
    }
    return count2;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Positive numbers in the given array is: "<<PosCount(v)<<"\n";
    cout<<"Negative numbers in the given array is: "<<NegCount(v);
}
