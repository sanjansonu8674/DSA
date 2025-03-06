#include <iostream>
#include <climits>
using namespace std;

// Function to find the maximum value in an array
int findMax(int arr[], int currentMax) {
    int size = 5;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > currentMax) {
            currentMax = arr[i];
        }
    }
    return currentMax;
}

// Function to find the minimum value in an array
int findMin(int arr[], int currentMin) {
    int size = 5;
    for (int i = 0; i < 5; i++) {
        if (arr[i] < currentMin) {
            currentMin = arr[i];
        }
    }
    return currentMin;
}
int main() {
    int arr[5] = {84, 6, 2, -48, 9};
    int max = INT_MIN;
    int min = INT_MAX;
    
    // Call the function with the array size
    cout << "The Maximum value in the arry is "<<findMax(arr, max) << endl;
    cout << "The Minimum value in the arry is "<< findMin(arr, min) << endl;

    //We can solve also like this


    // int arr1[6] = {54,86,0,12,58,21};
    // int min1 = arr1[0];
    // for (int i = 1; i < 6; i++)
    // {
    //     if (min1 > arr1[i])
    //     {
    //         min1 = arr1[i];
    //     }
        
    // }
    // cout<<"min = "<<min1<< endl;
    return 0;
}
