#include "bits/stdc++.h"
using namespace std;
int main()
{
    int a;
    cout<<"Enter the elements which you want to push:";
    vector<int> v;
    while(cin>>a)
    {
        v.push_back(a);
        if(cin.get()=='\n')
            break;
    }
    int sum=0;
    for(int i=0; i<v.size(); i++)
        sum+=v[i];
    int avg=sum/v.size();

    cout<<"Average of the given array: "<<avg;
}
