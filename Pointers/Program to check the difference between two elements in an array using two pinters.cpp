#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin >> a[i];
    
    int left=0, right=n-1;
    
    for(int left=0; left<n; left++)
    {
        for(int right=0; right<n; right++)
        {
            int diff=a[right]-a[left];
            if(diff==3)
            {
                cout<<left<<" "<<right<<endl;
                break;
            }
        }
    }
}
