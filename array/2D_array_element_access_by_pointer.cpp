#include<iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Accessing elements with array notation
    cout<<"arr[1][2] = "<< (arr[1][2])<<endl;
    
    // Accessing elements with pointers
    cout<<"*(arr[1] + 2) = "<< (*(arr[1] + 2))<<endl;
    cout<<"*(*(arr + 1) + 2) = "<< (*(*(arr + 1) + 2))<<endl;
    
    // Pointer to array
    int (*p)[4] = arr; // Pointer to an array of 4 integers
    cout<<"Pointer access: "<< (p[1][2])<<endl;

    return 0;
}
