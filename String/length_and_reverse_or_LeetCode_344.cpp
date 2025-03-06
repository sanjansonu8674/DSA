// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// length of string
int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}


// reverse of string
void reverse(char name[], int len){
    int s = 0, e = len-1;
    while(s <= e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
}


int main() {
    char name[20];
    cout<<"Enter Your name: ";
    cin>>name;
    
    int len = getlength(name);
    cout<<"The lenght of string is "<<len<<endl;

    reverse(name, len);
    
    cout<<"Reverse string: "<<name;
    return 0;
}