//////////////////////////////////////////////////////////////////////////////// USING FOR LOOP //////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000001], n=0, Positive_count=0, Negative_count=0;
    while(cin>>a[n])
    {
        if(cin.get()=='\n')
        break;
        n++;
    }
    for(int i=0; i<=n; i++)
    {
       if(a[i]>=0) Positive_count++;
       else Negative_count++;
    }
    cout<<"Positive elements in the given array is: "<<Positive_count<<endl<<"Negative elements in the given array is: "<<Negative_count;
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ Taking Input from user \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, Positive_count=0, Negative_count=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<n; i++)
    {
       if(a[i]>=0) Positive_count++;
       else Negative_count++;
    }
    cout<<"Positive elements in the given array is: "<<Positive_count<<endl<<"Negative elements in the given array is: "<<Negative_count;
}


//////////////////////////////////////////////////////////////////////////////// USING FOR EACH LOOP //////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, -20, 30, 40, -50, 5, -60, 1, -2, 100}, Positive_count=0, Negative_count=0;
    for(int i:a)
    {
       if(i>=0)
       Positive_count++;
       else Negative_count++;
    }
    cout<<"Positive elements in the given array is: "<<Positive_count<<endl<<"Negative elements in the given array is: "<<Negative_count;
}
