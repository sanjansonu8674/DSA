#include <iostream>
#include <vector>
using namespace std;

// Function to separate positive and negative numbers
void SeparateArr(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        if (arr[start] < 0 && arr[end] < 0) {
            start++;
        } else if (arr[start] >= 0 && arr[end] < 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        } else if (arr[start] >= 0 && arr[end] >= 0) {
            end--;
        } else {
            start++;
            end--;
        }
    }
}

int main() {
    vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

    cout << "Before Separation: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    SeparateArr(arr);

    cout << "After Separation: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
