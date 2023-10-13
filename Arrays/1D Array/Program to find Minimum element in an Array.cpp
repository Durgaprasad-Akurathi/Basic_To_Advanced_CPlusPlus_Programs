//////////////////////////////////////////////////////////////////////////////// USING FOR LOOP //////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, 20, 30, 40, 50, 5, 60, 100}, min=a[0];
    for(int i=0; i<8; i++)
    {
       if(a[i]<min)
       min=a[i];
    }
    cout<<min;
}


//////////////////////////////////////////////////////////////////////////////// USING FOR EACH LOOP //////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, 20, 30, 40, 50, 5, 60, 1, 2, 100}, min=a[0];
    for(int i:a)
    {
       if(i<min)
       min=i;
    }
    cout<<min;
}

//////////////////////////////////////////////////////////////////////////////////// USING INBUILD FUNCTION /////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000001], n=0;
    while(cin>>a[n])
    {
        if(cin.get()=='\t')
        break;
        n++;
    }

    int value=*min_element(a, a+n);
    cout<<"Minimum element in the given array: "<<value;
}
