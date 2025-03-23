#include <iostream>
#include <vector>
using namespace std;
int LinearSearch(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {8, 5, 62, 4, 15, 32, 4, 12, 58};
    int k;
    cin >> k;
    int found = LinearSearch(arr, k);
    cout<<"Element is available at "<<found;
    return 0;
}