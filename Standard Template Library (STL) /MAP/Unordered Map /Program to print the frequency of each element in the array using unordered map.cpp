#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> adp;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        adp[a[i]]++;
    }
    for(auto itr=adp.begin(); itr!=adp.end(); itr++)
    cout<<itr->first<<" "<<itr->second<<"\n";

    // for(auto x:adp)
    // cout<<x.first<<" "<<x.second<<"\n";
}
