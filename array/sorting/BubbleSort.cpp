#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n ; i++){
        for(int j = 0; j< n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int x: arr){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> arr = {4,6,0,1,2,8,2,4,1};
    bubbleSort(arr);
    return 0;
}