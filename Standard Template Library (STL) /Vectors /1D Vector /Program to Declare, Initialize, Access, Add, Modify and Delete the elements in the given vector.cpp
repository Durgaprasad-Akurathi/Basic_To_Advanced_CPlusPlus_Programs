#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    for(int x:v)
    cout<<x<<" ";

    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    cout<<"\n";
    for(int x:v)
    cout<<x<<" ";

    cout<<"\n";
    cout<<"\n";
    cout<<"element at index 0 is: "<<v[0]<<endl;
    cout<<"element at index 2 is: "<<v.at(2)<<endl;
    cout<<"element at index 6 is: "<<v.at(6)<<endl;

    cout<<"\n";
    v.at(0)=11;
    v.at(1)=12;
    for(int x:v)
    cout<<x<<" ";

    v.pop_back();
    v.pop_back();
    v.pop_back();

     cout<<"\n";
    for(int x:v)
    cout<<x<<" ";

}
