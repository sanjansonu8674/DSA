#include <iostream>
using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n ; j++)
        {
            cout <<i<<" ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n ; j++)
        {
            cout <<j<<" ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i ; j++)
        {
            cout <<j<<" ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < i ; j++)
        {
            cout <<j+i<<" ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    int num = 1; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout <<num<<" ";
            num++;
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (char ch = 'A'; ch <= int(n)+65  ; ch++)
        {
            cout <<ch<<" ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i <= n; i++)
    {

        for (char ch = 65 +int(i); ch <= int(n)+65+int(i)  ; ch++)
        {
            cout <<ch<<" ";
        }
        cout << endl;
    }
}

void pattern10(int n) {
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; 
        }
       
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl; 
    }
}

void pattern11(int n)
{
    for (int i = 0; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
      for (int i = 1; i <= n; i++) { 
        
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; 
        }
        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        // Print decreasing numbers
        for (int k = i - 1; k >= 1; k--) {
            cout << k << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "How many row you want: ";
    cin >> n;
    if (n>0)
    {
        pattern12(n);
    }
    else{
        cout<<"Enter a valid Number. Thankyou";
    }
    
}