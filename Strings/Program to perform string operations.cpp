#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s.length()<<endl;
    s+=" 1234567890";
    cout<<s<<endl;
    cout<<s.substr(0, 8)<<endl;
    cout<<s.find("Akurathi")<<endl;
}
