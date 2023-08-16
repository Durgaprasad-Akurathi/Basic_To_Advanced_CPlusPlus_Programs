#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={15, 20, 13, 19, 70, 64};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(a[i]<a[j])
			{
				a[i]=a[j];
				break;
			}
			else if(a[i]>=a[j] && j==n-1)
			{	
				a[i]=-1;
				j++;
			}
		}
	}
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
}


example-1: 4 2 3 9 7 6  //Input
output: 9 3 9 -1 -1 -1  //output


example-2: 7 20 31 19 70 64  //Input
output: 20 31 70 70 -1 -1  //output

	
