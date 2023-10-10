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

    vector<int>:: reverse_iterator itr;

    for(itr=v.rbegin(); itr!=v.rend(); itr++)
    cout<<*itr<<" ";

    // for(auto x:v)
    // cout<<x<<" ";
}


/////////////////////////////////////////////////////////////////////////////// ANOTHER TYPE ////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, 20, 30};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v(a, a+n);
    for(auto it=v.rbegin(); it!=v.rend(); it++)
    cout<<*it<<" ";
}


///////////////////////////////////////////////////////////////////////////// ANOTHER TYPE ////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n=10, x=100;
    vector<int> v(n,x);
    for(auto x:v)
    cout<<x<<" ";



    //n=creating the vector size
    //x=putting all the elements with the defined one in the given vector size.
}
