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

    if(binary_search(a, a+n, 15))
    {
        int value=lower_bound(a, a+n, 15)-a;
        cout<<"Present at Location: "<<value;
    }
    else cout<<"Not Present";
}

////////////////////////////////////////////////////////////////////////////////////////// Another Method ////////////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    if(binary_search(a, a+n, 15))
    {
        int value=lower_bound(a, a+n, 15)-a;
        cout<<"Present at Location: "<<value;
    }
    else cout<<"Not Present";
}
