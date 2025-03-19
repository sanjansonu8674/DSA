#include <iostream>
#include <vector>
using namespace std;
void insertationSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    { 
        int key = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j +1] = key;
    }
    for(int x: arr){
        cout<<x<<" ";
    }
}
int main()
{
    vector<int> arr = {11, 5, 3, 5, 8, 4, 1, 0, 6, 0, 4, 0};
    insertationSort(arr);
    return 0;
}