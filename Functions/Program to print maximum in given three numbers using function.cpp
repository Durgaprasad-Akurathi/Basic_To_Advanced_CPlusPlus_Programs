//////////////////////////////////////////////////////////// If It is a INTEGER VALUE /////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int maxi(int x, int y, int z)
{
    if(x>y && x>z)
    return x;
    else if(y>x && y>z)
    return y;
    else return z;
}

int main()
{
    int a,b,c, value;
    cin>>a>>b>>c;
    value=maxi(a, b, c);
    cout<<"MAXIMUM in the given three numbers is: "<<value;
}

//////////////////////////////////////////////////////////// If It is a FLOAT VALUE /////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

float maxi(float x, float y, float z)
{
    if(x>y && x>z)
    return x;
    else if(y>x && y>z)
    return y;
    else return z;
}

int main()
{
    float a,b,c, value;
    cin>>a>>b>>c;
    value=maxi(a, b, c);
    cout<<"MAXIMUM in the given three numbers is: "<<value;
}

