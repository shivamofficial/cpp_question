#include <iostream>
using namespace std;
void pairsum(int arr[],int size,int s)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==s)
            {
               cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

int main()
{
int arr[100];
int n;
cin>>n;
int keysum;
cin>>keysum;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
pairsum(arr,n,keysum);
}