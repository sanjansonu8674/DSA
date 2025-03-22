#include <iostream>
#include <vector>
using namespace std;

// Merge the split arrays
void merge(vector<int> &arr, int s, int mid, int e)
{
    vector<int> newArray(e - s + 1); // Create a temporary array of required size
    int idx1 = s, idx2 = mid + 1, x = 0;

    // Merge two sorted halves
    while (idx1 <= mid && idx2 <= e)
    {
        if (arr[idx1] <= arr[idx2])
            newArray[x++] = arr[idx1++];
        else
            newArray[x++] = arr[idx2++];
    }

    // Copy remaining elements from the left half
    while (idx1 <= mid)
        newArray[x++] = arr[idx1++];

            //OR

    // Copy remaining elements from the right half
    while (idx2 <= e)
        newArray[x++] = arr[idx2++];

    // Copy sorted elements back to the original array
    for (int i = 0; i < newArray.size(); i++)
        arr[s + i] = newArray[i];
}

// Split the array into smaller parts
void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e) return; // Base case

    int mid = s + (e - s) / 2; 
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main()
{
    vector<int> arr = {1, 5, 2, 4, 8, 2, 9, 1, 8, 20, 14};
    int s = 0, e = arr.size() - 1;
    mergeSort(arr, s, e);

    // Print sorted array
    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";
    cout << "\n";

    return 0;
}
