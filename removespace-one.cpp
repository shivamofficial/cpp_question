#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    int len=str.length();

    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            for(int j=i;j<len;j++)
            {
str[j]=str[j+1];
            }
            len--;
        }
        i++;
    }
    
cout<<str; 
}
// it apply when 1 space between two word, not more than 1 space between 2 word