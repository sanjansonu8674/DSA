// Binary Search is an efficient searching algorithm used to find an element in a sorted array.
// It follows the divide and conquer approach, repeatedly dividing the search range in 
// half until the target element is found or the range becomes empty.

#include <iostream>
#include <vector>
using namespace std;                                                                                                                                                                                                           using namespace std;
int BinarySearch(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        // if target is small than the middle element is array
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        // if targe is grater than the middle element is array
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 4;
    int found = BinarySearch(arr, k);
    cout << "At index " << found;
    return 0;
}