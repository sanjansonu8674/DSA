// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(vector<int> &nums)
{
    int max = nums[0];
    for (int i = 1; i <= nums.size(); i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
            return i; // Return the peak index
        }
        
    }
}
int main()
{
    // Write C++ code here
    vector<int> nums = {1, 2, 45,4, 5, 6, 4,12,5,8,9};
    int index = findPeakElement(nums);
    cout << "Index of Peak Element " << index;
    return 0;
}