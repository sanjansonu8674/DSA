#include<iostream>
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {84, 6, 2, 48, 9};
    int sum = 0;
    for (int i = 0; i < 5; i = i + 1)
    {
      sum += arr[i];
    }
    cout<<"Sum of all the element of array is "<< sum<<endl;
}