#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<array>
using namespace std;

int main()
{
    string str,temp;
    getline(cin,str);

    char ch;
    cin>>ch;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]!=ch)
        {
            temp.push_back(str[i]);
        }
    }
    cout<<temp;
}