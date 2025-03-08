// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Lower case
char lowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        return ch - 'A'+ 'a';
    }
}

// Upper case
char uppercase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch;
    }
    else{
        return ch - 'a'+ 'A';
    }
}

int main() {
    cout<<"Lower case: "<< lowercase('R')<<endl;
    cout<<"Upper case: "<< uppercase('r')<<endl;
    return 0; 
}