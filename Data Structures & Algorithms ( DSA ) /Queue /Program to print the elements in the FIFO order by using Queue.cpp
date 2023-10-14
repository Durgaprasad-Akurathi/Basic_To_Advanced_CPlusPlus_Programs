#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    queue<int> qu;
    while(cin>>a)
    qu.push(a);

    while(!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
}
