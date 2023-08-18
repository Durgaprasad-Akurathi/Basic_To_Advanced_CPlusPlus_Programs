//write a c++ code for the Problem
//Given a sorted array and a key as input, if the key matches any element in the array, print the key; otherwise, print the nearest value in the array.

// Example 1:
// Array: 1 3 5 7 8 9
// Key: 10
// Output: 9

// Example 2:
// Array: 1 2 4 5 7 8
// Key: 0
// Output: 1


#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool status=false;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int l=0, r=n, near=a[0], key;
    cin>>key;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==key)
        {
            status=true;
            break;
        }
        else if(a[mid]<key)
        {
            near=a[mid];
            l=mid+1;
        }
        else r=mid-1;
    }
    if(status)
    cout<<key;
    else cout<<near;
}

