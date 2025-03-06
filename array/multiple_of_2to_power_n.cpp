#include <iostream>
using namespace std;

int main()
{
    int num; // Decimal number to check
    cout << "Enter the number that you want to check if it is a power of 2^n: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0) {
        cout << "Yeah, it is a power of 2^n." << endl;
    } else {
        cout << "No, it is not a power of 2^n." << endl;
    }

    return 0;
}
