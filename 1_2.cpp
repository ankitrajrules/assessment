#include <bits/stdc++.h>
using namespace std;
void Reversal (int arr[], int start, int end){
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void RotateKElements (int arr[], int n, int k){
    //Reverse first k elements
    Reversal(arr, 0, k - 1);
    //Reverse last n-k elements
    Reversal(arr, k, n - 1);
    //Reverse all elements
    Reversal(arr, 0, n - 1);

    // if we want to rotate array 1 2 3 4 5 6 7 by 3 then it will result in 
    // 4 5 6 7 1 2 3 
    // if we observe this we would get that reverse of that is 3 2 1 7 6 5 4
    //if we reverse the array for first k numbers and then for next n-k numbers we would get the original array
    //so we know reverse of reverse is original so if we backtrack that we can get the desired result
}
int main() {
    int n=7,k=3;

    int arr[7] = {1,2,3,4,5,6,7};
    RotateKElements(arr, n, k);

    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
}