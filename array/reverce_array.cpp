#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5,8,65,25,87};
    int start = 0, end = sizeof(arr)/sizeof(int)-1;
    while (start <= end )
    {
        swap(arr[end], arr[start]);
        start ++;
        end --;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"The "<<i<<"th element of Array "<< arr[i]<<" "<<endl;
    }
        

}
