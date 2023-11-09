#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Second_Prev=0;
    int Prev=1;
    for(int i=0; i<=n; i++)
    {
        cout<<Second_Prev<<" ";
        int Present=Prev+Second_Prev;
        Second_Prev=Prev;
        Prev=Present;
    }
}


//if we want to print only the nth number on the fibonacci, then we have use this condition.
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Second_Prev=0;
    int Prev=1;
    for(int i=0; i<n; i++)
    {
        int Present=Prev+Second_Prev;
        Second_Prev=Prev;
        Prev=Present;
    }
    cout<<Second_Prev;
}
