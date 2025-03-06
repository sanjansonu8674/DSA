#include <iostream>
using namespace std;
bool checkvalue(int arr[])
{
    for (int i = 0; i < 5; i = i + 1)
    {
        if (arr[i] == 1)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int arr[5] = {5, 1, 8, 6, 7};
    // checkvalue(arr);
    // cout<<"value"<<checkvalue(arr);
    if (checkvalue(arr))
    {
        cout << "One Available in the array";
    }
    else
    {
        cout << "One Absent in the array";
    }
}
