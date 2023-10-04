#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    sort(a, a+n);

    for (int i=0; i<n; i++) 
    cout<<a[i]<<" ";
    cout<<endl;

    int l=0, r=n;
    while(l<=r) 
    {
        int mid=(l+r)/2;
        if (a[mid]==key) 
        {
            cout<<"Key found at index: "<<mid<<endl;
            break;
        }
        else if(a[mid]<key) 
        l=mid+1;
        else 
        r=mid-1;
    }
}

////////////////////////////////////////////////////////////////////////////////// Using Function //////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int key)
{
    int l=0;
    int r=n;
    while(l<=r) 
    {
        int mid=(l+r)/2;
        if (a[mid]==key) 
        {
            return mid;
            break;
        }
        else if(a[mid]<key) 
        l=mid+1;
        else 
        r=mid-1;
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

    sort(a, a+n);

    for (int i=0; i<n; i++) 
    cout<<a[i]<<" ";
    cout<<endl;

    int value=binary_search(a, n, key);
    cout<<value;
}
