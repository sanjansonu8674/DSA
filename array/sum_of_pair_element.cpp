#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 8, 65, 25, 87},sum[5];
    int count = 0;
    int start = 0, Next = 1;
    while (Next <= sizeof(arr) / sizeof(int)-1)
    {
        sum[count] = arr[Next]+arr[start];
        start += 2;
        Next += 2;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        cout << "The " << i << "th element of Array " << sum[i] << " " << endl;
    }
}
