#include "bits/stdc++.h"
using namespace std;

void RArray(int a[], int l, int r)
{
    if(l>=r) return;
    swap(a[l], a[r]);
    RArray(a, l+1, r-1);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    RArray(a, 0, n-1);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////// USING VECTOR //////////////////////////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;

vector<int> RArray(vector<int> v, int l, int r)
{
    if(l>=r) return v;
    swap(v[l], v[r]);
    return RArray(v, l+1, r-1);
}

int main()
{
    int a;
    vector<int> v;
    while(cin>>a)
    {
        v.push_back(a);
        if(cin.get()=='\n')
            break;
    }

    int n=v.size();
    v=RArray(v, 0, n-1);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
