#include<bits/stdc++.h>
using namespace std;

int g=10;    //GLOBAL VARIABLE

void fun()   //FUNCTION
{
    int a=15;       //LOCAL VARIABLE    (ONCE THE FUN() ENDS THE LOCAL VARIABLE IS DELETED AUTOMATICALLY.)     // a=15
    g+=a;           //ADDING THE LOCAL VARIABLE VALUE TO THE GLOBAL VARIABLE                                   // 30
    cout<<g<<endl;  //PRINTING THE UPDATED VALUE IN THE FUNCTION                                               // 30
} 

int main()  //MAIN
{
    cout<<g<<endl;    //PRINTING THE GLOBAL VARIABLE VALUE                                  // 10
    g=15;             //CHANGING THE GLOBAL VARIABLE VALUE                                  // 15
    cout<<g<<endl;    //PRINTING THE MODIFIED (OR) UPDATED GLOBAL VARIABLE VALUE            // 15
    fun();            //CALLING THE FUNCTION
    g++;              //THE VALUE WHAT WE ARE GETTING FROM FUN(), WE ARE INCREMENTING THAT VALUE    // 31
    cout<<g<<endl;    //PRINTING THE INCREMENTED VALUE OF THE GLOBAL VARIABLE                       // 31
}


//A variable inside the function is called LOCAL
//A variable outside the function is called GLOBAL

LOCAL VARIABLE:
//1) Local Variables are not accesseble by other functions, they only can be accessed in the function, where they declared.
//2) They Remain in the memory as long as the function runs and then they are terminated.

GLOBAL VARIABLE:
//1) Global variables can be accesseble all the functions of the program.
//2) As long as the program runs global variables are there.

