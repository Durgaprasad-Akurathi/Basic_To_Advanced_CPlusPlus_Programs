#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000001], n=0;
    while(cin>>a[n])
    {
        if(cin.get()=='\t')
        break;
        n++;
    }

    sort(a, a+n);

    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}

//////////////////////////////////////////////////////////////////////////// Another Method /////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    sort(a, a+n);

    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
