#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int left, int mid, int right)
{
    vector<int> v;
    int low=left;
    int high=mid+1;
    while(low<=mid && high<=right)
    {
        if(a[low]<=a[high])
        {
            v.push_back(a[low]);
            low++;
        }
        else
        {
            v.push_back(a[high]);
            high++;
        }
    }
    while(low<=mid)
    {
        v.push_back(a[low]);
        low++;
    }
    while(high<=right)
    {
        v.push_back(a[high]);
        high++;
    }
    for(int i=left; i<=right; i++)
        a[i]=v[i-left];
}

void MergeSort(int a[], int left, int right)
{
    if(left==right)
        return;
    int mid=(left+right)/2;
    MergeSort(a, left, mid);
    MergeSort(a, mid+1, right);
    Merge(a, left, mid, right);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    MergeSort(a, 0, n-1);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
