// You are given a sorted array of integers in ascending order and a target key. Your task is to find the element in the array that is either equal to the target key or closest to it. If the target key is present in the array, output the key itself. If the target key is not present, output the nearest element to the target key.

// Input:

// The first line contains an integer n (1 ≤ n ≤ 1000), representing the size of the array.
// The second line contains n space-separated integers a[i] (-10^9 ≤ a[i] ≤ 10^9), where each a[i] is an element of the sorted array.
// The third line contains an integer key (-10^9 ≤ key ≤ 10^9), representing the target key.
// Output:

// Output a single integer representing either the key itself if it is present in the array or the nearest element to the target key.

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

