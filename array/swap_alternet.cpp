#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Alterner swaped Array Element ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternet(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[5] = {5, 8, 65, 25, 87};
    int arr1[8] = {8, 9, 6, 2, 8, 4, 5, 15};

    swapAlternet(arr, 5);
    printArray(arr,5);

    swapAlternet(arr1, 8);
    printArray(arr1,8);
}
