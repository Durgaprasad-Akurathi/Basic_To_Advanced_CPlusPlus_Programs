// You are given a function,
// int findCount(int arr[], int length, int num, int diff);

// The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
// Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

// Example:
// Input:

// arr: 12 3 14 56 77 13
// num: 13
// diff: 2
// Output:
// 3

// Explanation:
// Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.

#include<bits/stdc++.h>
using namespace std;

int findCount(int arr[], int length, int num, int diff)
{
    int count=0;
    for(int i=0; i<length; i++)
    {
       int value=arr[i]-num;
       if(value<=diff)
        count++;
    }
    return count;
}

int main()
{
    int a[100001], n=0;
    while(cin>>a[n])
    {
        if(cin.get()=='\n')
        break;
        n++;
    }
    int num, diff;
    cin>>num>>diff;
    
    cout<<findCount(a, n, num, diff);
    
}

