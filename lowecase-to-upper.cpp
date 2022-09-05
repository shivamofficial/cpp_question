#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    char lower;
    char upper;
    if(ch=='a' && ch<='z')

    {
        cout<<ch;
    }
    else{
     lower=ch-'A'+'a'; // convert into lower
    }
    cout<<lower;
    if(ch=='A' && ch<='Z')
    {
        cout<<ch;
    }
    else{
        upper=ch-'a'+'A'; // convert into upper
    }
    cout<<endl<<upper;
}
