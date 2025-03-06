// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool palindrom(string st, int len){
    int start = 0, end = len - 1;
    while(start <= end){
        if(tolower(st[start]) != tolower(st[end]))
            return 0;
        else
        start ++;
        end --;
    }
    return 1;
}

int main() {
    string st;
    cout<<"Enter a string that you want to check: ";
    cin>>st;

    int len = st.length();
    cout<<"String is palindrom: "<<palindrom(st,len)<<endl;
    return 0; 
}