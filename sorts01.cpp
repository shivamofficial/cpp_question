#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortarray(int arr[],int n)
{
int start=0;
int end=n-1;
while(start<end)
{
    while(arr[start]==0 && start<end)
    {
        start++;
    }
    while(arr[end]==1 && start<end)
    {
        end--;
    }
    if(arr[start]==1 && arr[end]==0 && start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
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
    int n=10;
   
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sortarray(arr,n);
    printarray(arr,n);

}