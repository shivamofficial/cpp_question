#include<bits/stdc++.h> 
using namespace std; 
void swapalternate(int arr[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
      int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11, 33, 9, 76, 43};
swapalternate(even,8);
cout<<endl;
swapalternate(odd,5);

}