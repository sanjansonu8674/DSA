#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subArray(vector<int> &num){
    int n = num.size();
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            for(int i = start; i<= end; i++){
                cout<<num[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int> num ={1,2,3,4,5,6};
    subArray(num);
    return 0;
}