#include <bits/stdc++.h>
using namespace std;

int maximumSubarray(int arr[], int n){
    int maxSum = INT_MIN; 

    int sum = 0;
    //here the sum will be 0 for case all are negative int in the array
    for (int i=0; i<n; ++i){
        sum = max(sum, 0);   // if the sum comes -ve then it same as no element is taken from array so sum is 0
        sum += arr[i];
        maxSum = max(maxSum, sum); // Updating the maxSum if the current sum is > maxSum
    }
    return maxSum;
}
int main() {
    int arr[10] = {1,2,4,-5,7,-1,3,9,2};
    cout<<maximumSubarray(arr, 9);
}