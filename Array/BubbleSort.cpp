// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


void bubbleSort(vector<int> &arr) {
    int tamp;
        for(int i = 0; i < arr.size()-1; i++){
            for(int j = 0; j < arr.size()-1; j++){
                if(arr[j]> arr[j+1]){
                    tamp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = tamp;
                    //swap(arr[i],arr[j]);
                }
            }
        }
    }
    
    
int main() {
    vector<int> arr = {3,4,4,5,1,6,6,2}; 
    for(int i = 0; i< arr.size(); i++) cout<<arr[i];
    cout<<endl;
    selectionSort(arr);
    for(int i = 0; i< arr.size(); i++) cout<<arr[i];
    return 0;
}
