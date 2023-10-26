#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    while(n--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    vector<int>:: iterator i=v.begin();
    cout<<*i<<" ";
    i++;
    cout<<*i<<" ";
    i=v.end();
    i--;
    cout<<*i<<" ";
}
