#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a, &b);
    cout<<a<<" "<<b;
}


//The PASS BY ADDRESS is the one, whose actual parameters are changed when formal parameters are changed, we have access this by using pointers//
//In the above program we have pass the address of the variables to the function (Swap Function)//
//At Swap function we are accessing them by using pointers//
//The Draw back in PASS BY VALUE is eliminated in PASS BY ADDRESS or CALL BY ADDRESS//
