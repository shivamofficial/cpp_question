#include <iostream>

#include <string>

#include <cctype>

#include <algorithm>

using namespace std;
 

int main()
{
string str ;
getline(cin,str);
str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());

cout<< "String:"<< str<<"\n";

    return 0;
}