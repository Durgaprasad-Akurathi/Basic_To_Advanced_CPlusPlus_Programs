#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int size, int k)
{
    int l=0, r=size-1;
    for(int i=0; i<size; i++)
    {
        int mid=(l+r)/2;
        if(a[mid]==k)
        return mid;
        else if(a[mid]<k)
        l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    
    int index=BinarySearch(a, n, key);
    
    if(index!=-1)
    cout<<"Element found at Index: "<<index;
    else cout<<"Element not found in the given array";
}
