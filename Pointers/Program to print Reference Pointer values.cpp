#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    cout<<"Initially X value is: "<<x<<endl;
    cout<<"Initially Y value is: "<<y<<endl;
    
    x++;
    cout<<"Now the X value is: "<<x<<endl;
    cout<<"Now the Y value is: "<<y<<endl;
    
    y++;
    
    cout<<"After the X value is: "<<x<<endl;
    cout<<"After the Y value is: "<<y<<endl;
    
    int a=x;
    x=25;
    
    cout<<"A value is: "<<a<<endl;
    cout<<"X value is: "<<x<<endl;
    cout<<"Y value is: "<<y<<endl;
}
