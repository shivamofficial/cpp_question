#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<stack>

using namespace std;
int main()
{ string str;
string temp="";
string ans="";

    stack<string>st;
    int i=0;
    int n=str.length();

    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            st.push(temp);
            
        }
        else{
            temp=temp+str[i];
        }
    }
    ans=ans+temp;
    while(!st.empty())
    {
ans=ans+" "+temp;
    }
cout<<ans;
}