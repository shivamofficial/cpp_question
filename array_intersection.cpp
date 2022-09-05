#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void intersection(int arr1[],int arr2[],int m, int n)
{
    for(int i=0;i<m;i++)
    {
        int element=arr1[i];
        for(int j=0;j<n;j++)
        {
            if(arr2[j]==element)
            {
                cout<<element;
                arr2[i]=-12245;
                break;
            }
        }
    }
}

int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[4]={7,6,3,2};
   for(int i=0; i<5;i++)
   {
       for(int j=0; j<4;j++)
       {
           if(arr1[i]==arr2[j])
           { 
               cout<<arr1[i] <<"\n";
               arr2[j]=-122; // update taki us aar2[j] ko koi dobara use na kre
               break;
           }
           
       }
   }

   cout<<"after function call"<<endl;
  intersection(arr1,arr2,5,4);

    return 0;
}
