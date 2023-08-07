////////////////////////////////////////////////// Only These Five(5) Operations we can perform by using Pointers in C++ ///////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5]={5, 9, 7, 8, 2};
    int *p=A, *q=&A[4];
    
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p+=2;
    cout<<*p<<endl;
    p-=2;
    cout<<*p<<endl;
    p++;
    cout<<q-p<<endl;
}
