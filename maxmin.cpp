#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minelement(int arr[],int n)
{
int min=INT_MAX;
for(int i=0;i<n;i++)
{
    if(arr[i]<min)
    {
        min=arr[i];
    }
}
return min;
}
int maxelement(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
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
   
   cout<< minelement(arr,size)<<endl;
   printarray(arr,size);
   cout<<endl<<maxelement(arr,size)<<endl;


}