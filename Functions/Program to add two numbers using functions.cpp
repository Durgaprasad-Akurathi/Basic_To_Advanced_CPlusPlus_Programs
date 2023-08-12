//////////////////////////////////////////////////////////// If It is a INTEGER VALUE /////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=add(a,b);
    cout<<"Sum of the given two numbers is: "<<c;
}

//////////////////////////////////////////////////////////// If It is a FLOAT VALUE /////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

float add(float x, float y)
{
    float z;
    z=x+y;
    return z;
}

int main()
{
    float a,b,c;
    cin>>a>>b;
    c=add(a,b);
    cout<<"The Sum of the given numbers is: "<<c;
}

//////////////////////////////////////////////////////////// If It is a DOUBLE VALUE /////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

double add(double x, double y)
{
    double z;
    z=x+y;
    return z;
}

int main()
{
    double a,b,c;
    cin>>a>>b;
    c=add(a,b);
    cout<<"The Sum of the given numbers is: "<<c;
}
