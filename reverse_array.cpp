#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int n)
{
    cout<<"reverse array by brute force"<<endl;
    for(int i=n-1;i>=0;i--)
    {
cout<<arr[i]<<" ";
    }
}

void arrayreverse(int arr[],int n)
{
    cout<<"reverse array by optimise solution"<<endl;
    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
cin>>arr[i];
    }

    reversearray(arr,size);
arrayreverse(arr,size);
printarray(arr,size);
}