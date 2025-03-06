#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end)
{
    int j = mid + 1, i = start, k = 0;
    vector<int> temp(end - start + 1);

    while (i <= mid && j <= end)
    {
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= end)
        temp[k++] = arr[j++];


    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}
void MergeSort(vector<int> &arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (start >= end)
        return;

    MergeSort(arr, start,  mid);
    MergeSort(arr,  mid+1, end);
    merge(arr, start, mid, end);
}
int main()
{
    vector<int> arr = {8, 5, 69, 8, 5, 8, 68, 5, 95, 7, 595, 22, 56, 458};
    int start = 0, end = arr.size() - 1;
    MergeSort(arr, start, end);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}