#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {52, 8, 654, 252, 87};
    int arr1[5] = {5, 86, 25, 65, 84}, count = 0;
    ;
    int intersection[5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr1[j])
            {
                intersection[count] = arr1[j];
                count++;
                break; // Avoid duplicate checks for the same `arr[i]`
            }
        }
    }
    if (count == 0)
    {
        cout << "There is no intersection element ";
    }

    for (int i = 0; i < count; i++)
    {
        cout << "The " << i << "th element of Array " << intersection[i] << " " << endl;
    }
}
