#include "bits/stdc++.h"
using namespace std;

int NSum(int n)
{
    if(n==1)
        return n;
    return n+NSum(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<NSum(n);
}


////////////////////////////////////////////////////////////////////////////////////////////// Different Method ////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;

int NSum(int n, int value)
{
    cout<<value<<" ";
    if(value==n)
        return n;
    return value+NSum(n, value+1);
}

int main()
{
    int n, value=1;
    cin>>n;
    int result=NSum(n, value);
    cout<<result;
}
