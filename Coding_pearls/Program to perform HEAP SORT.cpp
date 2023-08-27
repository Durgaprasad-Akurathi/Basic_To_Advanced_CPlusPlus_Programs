#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>& a, int n, int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<n && a[left]>a[largest])
    largest=left;

    if(right<n && a[right]>a[largest])
    largest=right;

    if(largest!=i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapsort(vector<int>& a, int n)
{
    for(int i=n/2-1; i>=0; i--)
    heapify(a, n, i);

    for(int i=n-1; i>0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}


int main()
{
    vector<int> a={10, 30, 50, 20, 35, 15};
    int n=a.size();

    cout<<"Original Array: ";
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";

    heapsort(a, n);

    cout<<endl;

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
