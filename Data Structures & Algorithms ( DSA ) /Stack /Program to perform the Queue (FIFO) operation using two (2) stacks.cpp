#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;

    int a;
    while(cin>>a)
    s1.push(a);

    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
}
