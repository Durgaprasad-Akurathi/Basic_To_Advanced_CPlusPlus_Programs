#include<bits/stdc++.h>
using namespace std;

void swap(int x, int y)  //Formal Parameters
{
    int temp;
    cout<<x<<" "<<y<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);   //Actual Parameters
    cout<<a<<" "<<b;
}


//The Changes what we have done in Formal parameters that are not displayed on the Actual parameters, The actual parameter values remains constant, that may not get change.//
//In the above program we have taken two variables and we calling the function swap//
//The swap function is doing swapping but it is not returning anything, that why the changes what we have done in swap function is not displayed in the main//
//The CALL BY VALUE is the one, whose actual parameters are not changed when the formal parameters are changed//
