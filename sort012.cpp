#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n)
{
    int zeroes=0;
    int one=0;
    int two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zeroes++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
          else{
            two++;
          }
        

    }
    for(int i=0;i<zeroes;i++)
    {
        arr[i]=0;
    }
    for(int i=zeroes;i<one+zeroes;i++)
    {
        arr[i]=1;
    }
    for(int i=zeroes+one;i<zeroes+one+two;i++)
    {
        arr[i]=2;
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 sort012(arr,n);
 printarray(arr,n);

}