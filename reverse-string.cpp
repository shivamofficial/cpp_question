#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int getlength(char name[])
{int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[],int len)
{
    int start=0;
    int end=len-1;
    while(start<end)
    {
        swap(name[start++],name[end--]);
    }

}

int main()
{
  char name[100];
  cin>>name;
  int len=getlength(name);
  cout<<"length of string  "<<len<<endl;
  cout<<name<<endl;
  reverse(name,len);
  cout<<name<<endl;
 


}