// Problem Statement:

You are provided with an unsorted array containing both negative and positive numbers. Your task is to replace each element in the array with the nearest larger element to its right. If there is no larger element on the right side, replace the element with -1.

Write a program that takes the size of the array and its elements as input and produces the modified array based on the replacement rules.

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
    cout<<a[i]<<" ";
}

