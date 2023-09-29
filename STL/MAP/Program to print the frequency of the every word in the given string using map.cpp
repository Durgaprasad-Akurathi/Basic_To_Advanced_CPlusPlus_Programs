#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> adp;
    string s;
    getline(cin, s);
    stack<string> st;
    int start=0, i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            if(i>start)
            st.push(s.substr(start, i-start));
            start=i+1;
        }
    }
    if(i>start)
    st.push(s.substr(start, i-start));
    
    while(!st.empty())
    {
        adp[st.top()]++;
        st.pop();
    }
    
    for(auto x:adp)
    cout<<x.first<<" "<<x.second<<"\n";
}	
