#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x=127;
    int value=++x;
    //For Advance Compiler
    cout<<value<<endl;
    //For Old Compiler
    cout<<(int)value<<endl;
    
    int y=INT_MAX;
    cout<<y<<endl;
    ++y;  //It repeats in cyclic 
    cout<<y<<endl;
    
    int z=INT_MIN;
    cout<<z<<endl;
    --z; //It repeats in cyclic 
    cout<<z<<endl;
    
    
    /*Similarly happens to all data types, like double,float*/
}
