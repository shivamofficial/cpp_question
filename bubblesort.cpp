#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)// j<n-1 pr v output same but optimise solution ke liye 
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
 for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}