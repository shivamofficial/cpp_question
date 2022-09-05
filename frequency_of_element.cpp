#include <iostream>
using namespace std;

int main() {
    int n, count;
    
    //enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    //declare input and visited array, both of size 'n'
    int array[n], visited[n];
    
    //take inputs in the array
    cout << "Enter " << n << " numbers in the array: ";
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    
    //loop through the elements of the array
    for(int i=0; i<n; i++){
        //check if the element has already been counted (visited)
        //if so, then skip the element
        if(visited[i] == 1)
            continue;
         
        //otherwise, check the match with every element of the array
        count = 0;   
        for(int j=0; j<n; j++){
            if(array[i] == array[j]){
                //if the match is found:
                //1. increment the count, and
                //2. mark it visited
                visited[j] = 1;
                count++;
            }
        }
        //output the count
        // cout << array[i] << ": " << count << endl;
        // cout<<endl;7
        if(count==1)
        {
            cout<<array[i]<<" ";
        }
    }

    return 0;
}