#include<bits/stdc++.h>
using namespace std;

int& fun(int &x)
{
    x=x+10;
    return x;
}

int main()
{
    int n;
    cin>>n;
    cout<<n<<endl;
    fun(n);
    cout<<n<<endl;
}
