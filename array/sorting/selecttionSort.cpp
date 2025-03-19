#include<bits/stdc++.h>
#include<limits>
#include<iostream>
using namespace std;

vector<int> sectionSort(vector<int> &arrs){
    vector<int> arr = arrs;
    int n = arr.size();
    for(int i = 0; i< n; i++){
        int MinIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[MinIndex]){
                MinIndex = j;
            }
        }
        swap(arr[i],arr[MinIndex]);
    }
    for(int x: arr){
        cout<< x<<" ";
    }
    return arr;
}
int main(){
    vector<int> arr = {4,6,0,1,2,8,2,4,1};
    sectionSort(arr);
    
    return 0;
}