#include <bits/stdc++.h>
using namespace std;

bool IsBalanced(string s)
{
    stack<char> st;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        st.push(s[i]);
        else if(s[i]==')' ||  s[i]=='}' || s[i]==']')
        {
            if(st.empty())
            return false;
            else if(s[i]==')' && st.top()=='(')
            st.pop();
            else if(s[i]=='}' && st.top()=='{')
            st.pop();
            else if(s[i]==']' && st.top()=='[')
            st.pop();
            else return false;
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin>>s;
    if(IsBalanced(s))
    cout<<"Balanced Annaww..."<<endl;
    else cout<<"Not Balanced Annaww...."<<endl;
}






