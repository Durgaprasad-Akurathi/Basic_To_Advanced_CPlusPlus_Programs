//////////////////////////////////////////////////////////// Using POW FUNCTION /////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    int z;
    z=pow(x,y);
    return z;
}

int main()
{
    int m,n, value;
    cin>>m>>n;
    value=power(m, n);
    cout<<m<<" power "<<n<<" is: "<<value;
}

//////////////////////////////////////////////////////////// Without using POW Function /////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    int i=1, z=1;
    while(i<=y)
    {
        z=z*x;
        i++;
    }
    return z;
}

int main()
{
    int m,n, value;
    cin>>m>>n;
    value=power(m, n);
    cout<<m<<" power "<<n<<" is: "<<value;
}
