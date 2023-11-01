#include "bits/stdc++.h"
using namespace std;

void RArray(int a[], int i, int n)
{
    if(i>n/2) return;
    swap(a[i], a[n-i-1]);
    return RArray(a, i+1, n);
}

int main()
{
    int a[100001], n=0;
    while(cin>>a[n])
    {
        n++;
        if(cin.get()=='\n')
            break;
    }
    RArray(a, 0, n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////// USING single pointer vector ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;

vector<int> RArray(vector<int> v, int i, int n)
{
    if(i>n/2) return v;
    swap(v[i], v[n-i-1]);
    return RArray(v, i+1, n);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    while(n--)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    v=RArray(v, 0, v.size());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
