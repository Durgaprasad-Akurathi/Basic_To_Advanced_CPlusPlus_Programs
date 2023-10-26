// --------------> Using For Loop <-------------- //               ||||||
                                                                   ||||||
#include<bits/stdc++.h>                                            ||||||           #include<bits/stdc++.h>
using namespace std;                                               ||||||           using namespace std;
int main()                                                         ||||||           int main()
{                                                                  ||||||           {
    int n, count=0;                                                ||||||               bool status=true;
    cin>>n;                                                        ||||||               int n;
    if(n==0 || n==1)                                               ||||||               cin>>n;
    count=1;                                                       ||||||               if(n==0 || n==1)
    for(int i=2; i<=n/2; i++)                                      ||||||               status=false;
    {                                                              ||||||               for(int i=2; i<=n/2; i++)
        if(n%i==0)                                                 ||||||               {
        count=1;                                                   ||||||                   if(n%i==0)
    }                                                              ||||||                   status=false;
    if(count==0)                                                   ||||||               }
    cout<<n<<" is a Prime Number";                                 ||||||               if(status==true)
    else cout<<n<<" is Not a Prime Number";                        ||||||               cout<<n<<" is a Prime Number";
}                                                                  ||||||               else cout<<n<<" is Not a Prime Number";
                                                                   ||||||            }
                                                                   ||||||
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// --------------> Using While Loop <-------------- //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0, i=2;
    cin>>n;
    if(n==0 || n==1)
    count=1;
    while(i<=n/2)
    {
        if(n%i==0)
        count=1;
        i++;
    }
    if(count==0)
    cout<<n<<" is a Prime Number";
    else cout<<n<<" is Not a Prime Number";
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// --------------> Using Do While Loop <-------------- //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0, i=2;
    cin>>n;
    if(n==0 || n==1)
    count=1;
    do
    {
        if(n%i==0)
        count=1;
        i++;
    }while(i<=n/2);
    if(count==0)
    cout<<n<<" is a Prime Number";
    else cout<<n<<" is Not a Prime Number";
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
