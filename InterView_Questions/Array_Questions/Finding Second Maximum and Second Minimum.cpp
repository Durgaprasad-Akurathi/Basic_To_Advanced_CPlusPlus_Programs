// You are given an array of integers. Your task is to find the second maximum and second minimum elements in the array.

// Input:

// The input consists of a single line containing a sequence of integers separated by spaces.

// Output:

// Output two lines:
// The first line should display "Second Maximum in the given array is: " followed by the second maximum element.
// The second line should display "Second Minimum in the given array is: " followed by the second minimum element.

// Example-1:

// Input: 1 3 7 29 0 -1 -4 892 392
// Output: Second Maximum in the given array is: 392
//         Second Minimum in the given array is: -1

// Example-2:

// Input: 1 3 7 29 0 -4 892 392 452
// Output: Second Maximum in the given array is: 452
//         Second Minimum in the given array is: 0


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001], n=0;
    while(cin>>a[n])
    n++;

    int Maxi=INT_MIN, SMax=INT_MIN, Mini=INT_MAX, SMin=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(a[i]>Maxi)
        {
            SMax=Maxi;
            Maxi=a[i];
        }
        else if(a[i]>SMax && a[i]!=Maxi)
        SMax=a[i];

        if(a[i]<Mini)
        {
            SMin=Mini;
            Mini=a[i];
        }
        else if(a[i]<SMin && a[i]!=Mini)
        SMin=a[i];
    }

    cout<<"Second Maximum in the given array is: "<<SMax<<endl;
    cout<<"Second Minimum in the given array is: "<<SMin;

}



///////////////////////////////////////////////////////////////////////// Using Sort Function ///////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001], n=0;
    while(cin>>a[n])
    n++;

    sort(a, a+n);

    cout<<"Second Maximum in the given array is: "<<a[n-2]<<endl;
    cout<<"Second Minimum in the given array is: "<<a[1];

}

