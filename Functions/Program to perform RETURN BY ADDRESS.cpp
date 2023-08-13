#include<bits/stdc++.h>
using namespace std;

int* fun(int size)   //Returning the Address
{
    int *p=new int[size];   //Creating the Array in the Heap Memory
    for(int i=0; i<size; i++)
    p[i]=i+10;  
    return p;
}

int main()
{
    int* ptr=fun(5);
    for(int i=0; i<5; i++)
    cout<<ptr[i]<<" ";
    
    delete[] ptr;
}
