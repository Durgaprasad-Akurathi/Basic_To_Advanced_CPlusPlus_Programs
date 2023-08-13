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



////////////////////////////////////////////////////////////////////////////////// Another Example ///////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int* fun(int size)
{
    int *p=new int[size];
    for(int i=0; i<size; i++)
    p[i]=i*10;
    return p;
}

int main()
{
    int n;
    cin>>n;
    int* ptr=fun(n);
    for(int i=0; i<n; i++)
    cout<<ptr[i]<<" ";
    
    delete[] ptr;
}
