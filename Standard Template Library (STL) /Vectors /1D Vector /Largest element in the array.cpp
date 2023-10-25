#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a;
    vector<int> v;
    while(cin>>a)
    v.push_back(a);

    int value=*max_element(v.begin(), v.end());
    cout<<"Maximum element in the given array is: "<<value;
}
