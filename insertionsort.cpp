#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)// round ke liye
    {int j=i-1;
    int temp=arr[i];
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

