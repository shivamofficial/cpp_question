#include <iostream>
using namespace std;


int main()
{
    int arr[100],visited[100];
    int n,count;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(visited[i]==1)
        continue;
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
           visited[j]=1;
                count++;

    
            }
        }
    
         if(count>1)
         {
             cout<<arr[i]<<endl;
         }
    }



}
