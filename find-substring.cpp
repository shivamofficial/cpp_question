#include <iostream>

#include <string>

#include <cctype>

#include <algorithm>

using namespace std;

int findsubstring(string str,string substr)
{int i,j,k,l;
l=substr.length();
for(int i=0;i<str[i+l-1];i++)
    {
     k=i;
        for( j=0;j<=l-1;j++)
        {
            if(str[k]!=substr[j])
            {
                break;
            }
            k++;
         
        }
           if(j==l)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
string str;
getline(cin,str);
string substr;
cin>>substr;
cout<<findsubstring(str,substr);


}