#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    queue<int> q;
    while(cin>>a)
    q.push(a);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
