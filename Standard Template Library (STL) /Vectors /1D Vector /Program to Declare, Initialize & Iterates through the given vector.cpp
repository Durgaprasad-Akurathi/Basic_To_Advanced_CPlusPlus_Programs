#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);

    vector<int>:: iterator itr;

    for(itr=v.begin(); itr!=v.end(); itr++)
    cout<<*itr<<" ";

    // for(auto x:v)
    // cout<<x<<" ";
}
