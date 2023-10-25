#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    while(cin>>n)
    v.push_back(n);
    sort(v.begin(), v.end(), greater<>());

    for(auto x:v)
    cout<<x<<" ";
}
