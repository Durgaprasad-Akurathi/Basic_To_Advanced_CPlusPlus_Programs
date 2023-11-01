#include "bits/stdc++.h"
using namespace std;

void subseq(vector<int> &v, int a[], int i, int n)
{
    if(i==n)
    {
        for(auto &x:v)
            cout<<x<<" ";
        if(v.size()==0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    v.push_back(a[i]);
    subseq(v, a, i+1, n);
    v.pop_back();
    subseq(v, a, i+1, n);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    vector<int> v;

    subseq(v, a, 0, n);
}



OUTPUT
3
1 2 3

1 2 3
1 2
1 3
1
2 3
2
3
{}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Reverse order ////////////////////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;

void subseq(vector<int> &v, int a[], int i, int n)
{
    if(i==n)
    {
        for(auto &x:v)
            cout<<x<<" ";
        if(v.size()==0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    subseq(v, a, i+1, n);
    v.push_back(a[i]);
    subseq(v, a, i+1, n);
    v.pop_back();
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    vector<int> v;

    subseq(v, a, 0, n);
}


OUTPUT
3
1 2 3
  
{}
3
2
2 3
1
1 3
1 2
1 2 3
