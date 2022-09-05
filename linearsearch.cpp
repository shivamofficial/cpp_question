#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++ )
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[100],n;
    cin>>n;
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int found=linearsearch(arr,n,key);
    if(found)
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    

}