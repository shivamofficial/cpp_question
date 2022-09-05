#include<bits/stdc++.h> 
using namespace std; 
int unique_number(int arr[], int n) 
{ 
 int ans=0;
 for(int i=0;i<n;i++)
 {
    ans=ans^arr[i];
 }
 return ans;
} 
  
// Driver program
int main() 
{ 
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter numbers you want to take in array: ";
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"\nUnique numbers in given array are: ";
    cout<<unique_number(arr, n)<<endl; 
    
    return 0; 
}