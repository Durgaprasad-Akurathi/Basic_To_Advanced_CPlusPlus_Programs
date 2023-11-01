// --------------> Using For Loop <-------------- //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, rev=0;
    cout<<"Please enter the valid number: ";
    cin>>n;
    int num=n;
    for(; n!=0; n/=10)
    {
        int rem=n%10;
        rev=(rev*10)+rem;
    }
    if(rev==num)
    cout<<num<<" is a Palindrome";
    else cout<<num<<" is not a Palindrome";
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// --------------> Using While Loop <-------------- //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, rev=0;
    cout<<"Please enter the valid number: ";
    cin>>n;
    int num=n;
    while(n>0)
    {
        int rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    if(rev==num)
    cout<<num<<" is a Palindrome";
    else cout<<num<<" is not a Palindrome";
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// --------------> Using Do While Loop <-------------- //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, rev=0;
    cout<<"Please enter the valid number: ";
    cin>>n;
    int num=n;
    do
    {
        int rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }while(n!=0);
    if(rev==num)
    cout<<num<<" is a Palindrome";
    else cout<<num<<" is not a Palindrome";
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
