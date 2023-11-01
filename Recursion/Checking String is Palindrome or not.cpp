#include "bits/stdc++.h"
using namespace std;

string StrPalin(string s, int l, int r)
{
    if(l>=r)
        return s;
    swap(s[l], s[r]);
    return StrPalin(s, l+1, r-1);
}

int main()
{
    string s;
    getline(cin, s);
    string result=StrPalin(s, 0, s.length());
    if(result==s)
        cout<<"Palindrome";
    else cout<<"Not a Palindrome";
}


//////////////////////////////////////////////////////////////////////////////////////////////////////// After converting capital to small letters & vice versa /////////////////////////////////////////////////////////////////////////////////////////////////////

#include "bits/stdc++.h"
using namespace std;

string StrPalin(string s, int l, int r)
{
    if(l>=r)
        return s;
    swap(s[l], s[r]);
    return StrPalin(s, l+1, r-1);
}

int main()
{
    string s;
    getline(cin, s);
    for(auto &x:s)
        x=tolower(x);   //x=toupper(x);
    string result=StrPalin(s, 0, s.length()-1);
    for(auto &x:result)
        x=tolower(x);  //x=toupper(x);
    if(result==s)
        cout<<"Palindrome";
    else cout<<"Not a Palindrome";
}
