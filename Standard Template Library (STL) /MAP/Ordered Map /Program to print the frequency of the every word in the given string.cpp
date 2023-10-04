#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> st;
    map<string, int> adp;
    string s;
    getline(cin, s);
    int start=0, i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            adp[st.top()]++;
            start=i+1;
        }
        else
        st.push(s.substr(start, i-start+1));
    }

    while(!st.empty())
        st.pop();

    for(auto x:adp)
    cout<<x.first<<" "<<x.second<<endl;
}


/////////////////////////////////////////////////////////////////////////////// Another Method ///////////////////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> st;
    map<string, int> adp;
    string s;
    getline(cin, s);
    int start=0, i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            st.push(s.substr(start, i-start));
            adp[st.top()]++;
            start=i+1;
        }
        else
        st.push(s.substr(start, i-start+1));
    }
  //st.push(s.substr(start, i-start));

    while(!st.empty())
        st.pop();

    for(auto x:adp)
    cout<<x.first<<" "<<x.second<<endl;
}


/////////////////////////////////////////////////////////////////////////////// Character to word wise Printing ///////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> st;
    map<string, int> adp;
    string s;
    getline(cin, s);
    int start=0, i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
            start=i+1;
        else
        st.push(s.substr(start, i-start+1));
    }

    while(!st.empty())
    {
        adp[st.top()]++;
        st.pop();
    }    
    for(auto x:adp)
    cout<<x.first<<" "<<x.second<<endl;
}

