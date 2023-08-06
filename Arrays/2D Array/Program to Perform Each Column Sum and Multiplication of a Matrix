#include<iostream>
using namespace std;
int main()
{
    int r,c, csum=0, cmul=1;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin>>a[i][j];
    int x=1;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            csum+=a[j][i];
            cmul*=a[j][i];
        }
        cout<<"Sum of Column "<<x<<": "<<csum<<endl;
        cout<<"Multiplication of Column"<<x<<": "<<cmul<<endl;
        csum=0;
        cmul=1;
        x++;
    }
}
