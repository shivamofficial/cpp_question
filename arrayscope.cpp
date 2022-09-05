#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void updatearray(int arr[],int n)
{
    arr[0]={100};
    cout<<endl<<"update array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
cout<<"array without update"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    updatearray(arr,n);
     cout<<"array after update"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

}