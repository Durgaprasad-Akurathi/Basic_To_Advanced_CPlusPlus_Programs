#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int largest=INT_MIN, Sec_largest=INT_MIN, smallest=INT_MAX, Sec_smallest=INT_MAX;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>largest)
        {
            Sec_largest=largest;
            largest = v[i];
        }
        else if(v[i]>Sec_largest && v[i]!=largest)
            Sec_largest=v[i];

        if(v[i]<smallest)
        {
            Sec_smallest=smallest;
            smallest = v[i];
        }
        else if(v[i]<Sec_smallest && v[i]!=smallest)
            Sec_smallest=v[i];
    }
    cout<<"Largest number in the given array is: "<<largest<<"\n"<<"2nd Largest in the given array is: "<<Sec_largest<<"\n";
    cout<<"Smallest number in the given array is: "<<smallest<<"\n"<<"2nd Smallest in the given array is: "<<Sec_smallest;
}
