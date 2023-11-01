#include "bits/stdc++.h"
using namespace std;

string StrPalin(string s,int i,int n)
{
    if(i>n/2)
        return s;
    swap(s[i], s[n-i-1]);
    return StrPalin(s, i+1, n);

}

int main()
{
    string s;
    getline(cin, s);
    for(auto &x:s)
        x=toupper(x);
    string result=StrPalin(s, 0, s.length());
    for(auto &x: result)
        x=toupper(x);
    if(result==s)
        cout<<"Palindrome";
    else cout<<"Not Palindrome";
}
