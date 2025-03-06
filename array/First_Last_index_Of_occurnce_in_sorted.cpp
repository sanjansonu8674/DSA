#include <iostream>
#include <vector>
using namespace std;

int firstOccu(vector<int>& arr, int key)
{
    int s = 0, e = arr.size() - 1, ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
    }
    return ans;
}

int lastOccu(vector<int>& arr, int key)
{
    int s = 0, e = arr.size() - 1, ans = -1; 
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 7};
    cout << "The start index of 4 is " << firstOccu(arr, 4) << endl;


    cout << "The last index of 4 is " << lastOccu(arr, 4) << endl;
    return 0;
}
