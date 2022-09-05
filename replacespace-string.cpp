#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string str1="  my name is shivam";
       str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    
    cout<<str1<<endl;

}