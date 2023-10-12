#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int> v;
    while(cin>>a)
    v.push_back(a);

    int value=*min_element(v.begin(), v.end());
    cout<<"Minimum element in the array is: "<<value;
}
