#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], i;
    for(i=0; i<n; i++)
    cin>>a[i];

    sort(a, a+n);

    for(i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;

    if(binary_search(a, a+n, 40)) 
    {
        int index = lower_bound(a, a+n, 40) - a;
        cout << "Present at index " << index;
    }
    else cout<<"Not Present";
}
