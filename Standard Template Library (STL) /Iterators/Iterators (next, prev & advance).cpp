#include "bits/stdc++.h"
using namespace std;
int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    vector<int>:: iterator i=v.begin();
    i=next(i);
    cout<<*i<<" ";
    i=next(i,4);
    cout<<*i<<" ";
    i=prev(i);
    cout<<*i<<" ";
    i=prev(i,2);
    cout<<*i<<" ";

    advance(i,7);
    cout<<*i<<" ";
}
