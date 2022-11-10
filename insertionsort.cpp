#include <iostream>

using namespace std;



//compares all the previous elements of the key element in the array in every iteration
//and if the previous elemnts are bigger it swaps it with the key 1 by 1 pushing the key
//element in the start giving us an ascending order sorted array 
//key value changes in each iteration and compares with all the previous elemnts

int main(){


    int key;
    int j =0;
    int arr[9] = {5,3,9,2,1,1,4,6,7};
    int n = 9;

 for (int i = 1; i < n; i++)
 {
     key = arr[i];
     j = i-1;

    while (j>=0 && arr[j]>key)
    {
        arr[j+1] = arr[j];
        j = j-1;
    }

    arr[j+1] = key; 

 }
 

for (int i = 0; i<9; i++)
{
    cout<<arr[i];
}

return 0;
}