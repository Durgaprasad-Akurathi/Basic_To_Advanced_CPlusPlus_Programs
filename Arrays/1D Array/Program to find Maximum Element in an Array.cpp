//////////////////////////////////////////////////////////////////////////////// USING FOR LOOP //////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, 20, 30, 40, 500, 60, 70, 80, 90, 100}, max=0;
    for(int i=0; i<10; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<max;
}


//////////////////////////////////////////////////////////////////////////////// USING FOR EACH LOOP //////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10, 20, 30, 40, 500, 60, 70, 80, 90, 100}, max=0;
    for(int i:a)
    {
        if(i>max)
        max=i;
    }
    cout<<max;
}

////////////////////////////////////////////////////////////////////////////////// USING INBUILD FUNCTION ////////////////////////////////////////////////////////////////////////////

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

    int value=*max_element(a, a+n);
    cout<<"Maximum element in the given array: "<<value;
}
