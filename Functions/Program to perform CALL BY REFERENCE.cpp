#include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap(a, b);
    cout<<a<<" "<<b;
}


//The CALL BY REFERENCE is same as the CALL BY VALUE but the actual parameters are changed when we change the formal parameters//
//The above program will do the same operation same as CALL BY VALUE//
//In the program we are sending the actual parameters in main, but in swap function it taking reference of the actual parameters//
//That why if we do any change in the formal parameters it will change the actual parameters//
