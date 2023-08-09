#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    
    int left=0, right=n-1, mini=a[0];
    while(left<=right)
    {
        mini=min(mini, min(a[left], a[right]));
        left++;
        right--;
    }
    cout<<mini;
}
