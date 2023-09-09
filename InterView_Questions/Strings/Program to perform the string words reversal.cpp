#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> st;
    string s;
    getline(cin, s);
    int start=0, i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            st.push(s.substr(start, i-start));
            start=i+1;
        }
    }
    st.push(s.substr(start, i-start));
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
