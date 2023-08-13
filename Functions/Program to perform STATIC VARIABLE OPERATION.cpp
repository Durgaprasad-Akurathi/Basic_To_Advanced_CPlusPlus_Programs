#include<bits/stdc++.h>
using namespace std;

int v=101;    //GLOBAL VARIABLE

void fun()
{
   static int v=1;    // STATIC VARIABLE DECLARATION
   int a=10;          // ASSIGNING VALUE TO THE VARIABLE 'A'
   v++;               // INCREMENTING THE STATIC VARIABLE VALUE
   cout<<a<<" "<<v<<endl;  // PRINTING THE BOTH VARIABLE & INCREMENTED STATIC VALUE
}

int main()
{
    fun();        //CALLING THE FUNCTION 3 TIMES   // 10 2
    fun();                                         // 10 3
    fun();                                         // 10 4
    v--;                                           // DECREMENTING THE GLOBAL VARIABLE VALUE
    cout<<"Inside the main: "<<v;                  // Inside the main: 100   
}


// 1) Static variables are the variables which remains always in the memory, they are just like global variables.
// 2) Only the change is the global variables can be accessable anywhere in the program but static variables are accessable only inside the function.


// *) static variable scope is limited upto the function.

