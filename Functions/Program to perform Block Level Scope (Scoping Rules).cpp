#include<bits/stdc++.h>
using namespace std;

int a=10;   //GLOBAL VARIABLE   (SCOPE IS THROUGH OUT PROGRAM)

int main()
{
    int a=20;   //LOCAL VARIABLE   (SCOPE IS INSIDE THE MAIN PROGRAM)
    {
        int a=30;       //LOCAL VARIABLE  (SCOPE IS UPTO THE DEFINED BLOCK RANGE)
        cout<<a<<endl;  // 30
    }
    cout<<a<<endl;      // 20
    cout<<::a<<endl;    // IF WE WANT GLOBAL VARIABLE VALUE, WE NEED SCOPE RESOULTION OPERATOR SYMBAL INFRONT OF THE VARIABLE, THEN ONLY IT WILL PRINTS THE 'A' VALUE  // 10
}


//C++ Supports Block Level Scope
