//////////////////////////////////////////////////////////////////////////////// USING FOR LOOP //////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool status=false;
    int a[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, key=90, l=0, r=9, mid;
    for(int i=0; i<10; i++)
    {
        mid=(l+r)/2;
        if(key==a[mid])
        {
            status=true;
            cout<<"key "<<key<<" Found at location "<<mid;
            break;
        }
        else if(key>a[mid])
        l=mid+1;
        else if(key<a[mid])
        r=mid-1;
    }
    if(!status)
    cout<<"Key not found in the array";
}


//////////////////////////////////////////////////////////////////////////////// USING FOR EACH LOOP //////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    bool status = false;
    int a[] = {10, 20, 30, 40, 500, 60, 70, 80, 90, 100, 101, 200, 300}, key=101, left = 0, right = sizeof(a) / sizeof(a[0]) - 1, mid;
    for (int i: a) 
    {
        while(left <= right) 
        {
            mid = left + (right - left) / 2;
            if (key == a[mid]) 
            {
                status = true;
                cout << "Key " << key << " Found at location " << mid;
                break;
            } 
            else if (key > a[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
        break;
    }
    if (!status) 
        cout << "Key not found in the array";
}
