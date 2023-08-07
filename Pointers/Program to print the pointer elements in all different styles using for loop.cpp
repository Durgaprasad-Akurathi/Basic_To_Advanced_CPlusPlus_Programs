#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5]={5, 9, 7, 8, 2};
    int *p=A;
    
    //Printing the Array values in all different styles using for loop//
    
    cout<<"1st Method: ";
    for(int i=0; i<5; i++)
        cout<<A[i]<<" ";
    cout<<endl;
    cout<<"2nd Method: ";
    for(int i=0; i<5; i++)
        cout<<i[A]<<" ";
    cout<<endl;
    cout<<"3rd Method: ";
    for(int i=0; i<5; i++)
        cout<<*(i+A)<<" ";
    cout<<endl;
    cout<<"4th Method: ";
    for(int i=0; i<5; i++)
        cout<<*(A+i)<<" ";
    cout<<endl;
    cout<<"5th Method: ";
    for(int i=0; i<5; i++)
        cout<<(A+i)<<" ";
    cout<<endl;
    cout<<"6th Method: ";
    for(int i=0; i<5; i++)
        cout<<(p+i)<<" ";
    cout<<endl;
    cout<<"7th Method: ";
    for(int i=0; i<5; i++)
        cout<<*(p+i)<<" ";
}
