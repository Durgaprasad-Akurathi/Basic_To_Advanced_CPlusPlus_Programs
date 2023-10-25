#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, Lshift;
    cin>>n>>Lshift;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    
    if(Lshift>n)
    Lshift=Lshift%n;

    for(int i=0; i<n; i++)
    {
        int temp=(i+Lshift)%n;
        cout<<a[temp]<<" ";
    }

}


///////////////////////////////////////////////////////////////////////////////////////// Basic Method ////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,L;
    cin>>n>>L;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int temp;
    while(L--)
    {
        temp=a[0];
        for(int i=0; i<n-1; i++)
        a[i]=a[i+1];
        a[n-1]=temp;
    }

    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}

