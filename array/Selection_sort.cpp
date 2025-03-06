#include <iostream>
#include <vector>
using namespace std;
void selection(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {

        int j = i + 1, minIndex = i;
        while (j < arr.size())
        {
            // This is increasing order if you want decreasing order just change sign < to > in 'if' statement
            if (arr[j] > arr[minIndex])
            {
                minIndex = j;
            }
            j++;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    vector<int> arr = {8, 6, 1, 59, 4, -25, 9, 34};
    selection(arr);
    cout<< "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout <<arr[i] << " ";
    }
    return 0;
}
