#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(a[i]==key)
        return i;
    }
    return 0;
}

int main()
{
    int n, key;
    cin>>n>>key;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    
    int index=LinearSearch(a, n, key);
    
    if(index!=0)
    cout<<"Element found at index: "<<index;
    else cout<<"Element not found in the given array";
}
