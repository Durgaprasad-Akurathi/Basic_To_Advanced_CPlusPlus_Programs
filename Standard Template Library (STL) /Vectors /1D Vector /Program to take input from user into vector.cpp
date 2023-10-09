#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(auto &x:v)
    cout<<x<<" ";
}


/////////////////////////////////////////////////////////////////////////////////////////////// ANOTHER TYPE /////////////////////////////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    vector<int> v;
    while(cin>>a)
    v.push_back(a);

    for(auto &x:v)
    cout<<x<<" ";
}


