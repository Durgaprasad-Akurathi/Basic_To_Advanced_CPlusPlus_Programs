#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    queue<int> q;
    while(cin>>a)
    q.push(a);

    cout<<"First in the queue is: "<<q.front()<<"\n"<<"Last in the queue is: "<<q.back();
}
