#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int> v;
    cout<<"Enter the array elements which you want to push:";
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int MaxiElement=*max_element(v.begin(), v.end());
    int MiniElement=*min_element(v.begin(), v.end());
    cout<<"Maximum element in the given array is: "<<MaxiElement<<"\n"<<"Minimum element in the given array is: "<<MiniElement;
}
