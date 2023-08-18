//You are given an array of integers. Your task is to square each element of the array, sort the squared elements in ascending order, and output the sorted array.

//Input:
// The first line contains an integer, n (1 ≤ n ≤ 1000), representing the size of the array.
// The second line contains n space-separated integers a[i] (-10^9 ≤ a[i] ≤ 10^9), where each a[i] is an element of the array.
// Output:

// Output a single line containing n space-separated integers, representing the sorted array of squared elements in ascending order.
// Example:

// Input:8
// -4 -2 -1 0 1 5 7 9

// Output:
// 0 1 1 4 16 25 49 81

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    for(int i=0; i<n; i++)
    a[i]*=a[i];


    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else if(a[i]<=a[j])
            continue;
        }
    }

    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}


