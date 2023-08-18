// You are given an array of integers. Your task is to modify the array such that each element is replaced with the next greater element in the array, or -1 if no such element exists.

// Input:

// The first line contains an integer n (1 ≤ n ≤ 1000), representing the size of the array.
// The second line contains n space-separated integers a[i] (-10^9 ≤ a[i] ≤ 10^9), where each a[i] is an element of the array.

// Output:

// Output a single line containing n space-separated integers, representing the modified array after replacing each element with the next greater element or -1 if no such element exists.

// Example 1:
// Input:
// Size: 6
// Array: 4 2 3 9 7 6
// final Array: 9 3 9 -1 -1 -1

// Example 2:
// Input:
// Size: 6
// Array: 7 20 13 97 17 16
// final Array: 20 97 97 -1 -1 -1


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(a[i]<a[j])
            {
                a[i]=a[j];
                break;
            }
            else if(a[i]>=a[j] && j==n-1)
                a[i]=-1;
        }
    }
    
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}

