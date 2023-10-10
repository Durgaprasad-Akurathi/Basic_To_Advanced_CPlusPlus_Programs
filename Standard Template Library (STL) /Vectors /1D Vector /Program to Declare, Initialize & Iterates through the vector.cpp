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


/////////////////////////////////////////////////////////////////////////////// ANOTHER TYPE ////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";   //This will not the check the array out of bound index & it will not through any exception like out of bound.

    for(int i=0; i<v.size(); i++)
    cout<<v.at(i)<<" ";    //This will check the array out of bound index & it will through exception like out of bound.It is better to use this syntax to avoid runtime error.
}


/////////////////////////////////////////////////////////////////////////////// ANOTHER TYPE ////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n=10, x=100;
    vector<int> v(n,x);
    for(auto it=v.begin(); it!=v.end(); it++)
    cout<<*it<<" ";



    //n=creating the vector size
    //x=putting all the elements with the defined one in the given vector size.
}

/////////////////////////////////////////////////////////////////////////////// ANOTHER TYPE ///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n=10, x=100;
    vector<int> v(n,x);
    for(auto it=v.begin(); it!=v.end(); it++)
    cout<<*it<<" ";



    //n=creating the vector size
    //x=putting all the elements with the defined one in the given vector size.
}
