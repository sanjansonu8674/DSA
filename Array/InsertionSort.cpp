#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int> &arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i -1; 
        
        
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        
        
        arr[j+1] = key;
    }
}
int main(){
    vector<int> arr = {4,8,9,65,75,85,9,25} ;
    cout<<"Unsorted array ";
    for(int i = 0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion( arr );
    cout<<"Sorted array ";
    for(int i = 0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}