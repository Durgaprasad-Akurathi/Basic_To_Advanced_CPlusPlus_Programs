#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    
    int left=0, right=n-1, maxi=INT_MIN;
    
    while(left<=right)
    {
        maxi=max(maxi, max (a[left], a[right]));
        left++;
        right--;
    }
    
    cout<<maxi;
}
