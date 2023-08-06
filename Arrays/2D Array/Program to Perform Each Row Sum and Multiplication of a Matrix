#include<iostream>
using namespace std;
int main()
{
    int r,c, rsum=0, rmul=1;
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
            rsum+=a[i][j];
            rmul*=a[i][j];
        }
        cout<<"Sum of row "<<x<<": "<<rsum<<endl;
        cout<<"Multiplication of row"<<x<<": "<<rmul<<endl;
        rsum=0;
        rmul=1;
        x++;
    }
}
