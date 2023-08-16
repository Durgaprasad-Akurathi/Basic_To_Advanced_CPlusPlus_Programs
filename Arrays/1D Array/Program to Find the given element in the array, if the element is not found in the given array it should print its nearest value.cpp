#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001], n=0;
    while(cin>>a[n])
    {
        if(cin.get()=='\n')
        break;
        n++;
    }
    
    int key, left = 0, right = n, nearest = a[0]; 
    cin>>key;
    
    while (left <= right) 
    {
        int mid = (left+right)/2;

        if (a[mid]==key) 
            cout << key << endl;
        else if (a[mid] < key) 
        {
            nearest = a[mid];
            left = mid + 1;
        } 
        else
            right = mid - 1;
    }
    cout << nearest << endl;
}



//write a c++ code for the Problem
//you are given an sorted array as input and also one key, if key is matching with any element in the given array you should print that key else, you should print its nearest value which is there in the given array?

ex-1: 1 3 5 7 8 9
key: 10
output: 9


ex-2: 1 2 4 5 7 8
key: 3
output: 2
