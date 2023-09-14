#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> adp;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    for(int i=0; i<n; i++)
    adp[a[i]]++;

    for(auto x:adp)
    cout<<x.first<<" "<<x.second<<"\n";
}
