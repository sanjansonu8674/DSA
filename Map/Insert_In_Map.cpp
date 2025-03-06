#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
map<int,string> Emp_detail;
void Insert(int id, string Name){
    if(Emp_detail.find(id) != Emp_detail.end()){
        cout<<"Employee is already Exist "<<endl;
    }
    else{
        Emp_detail[id] = Name;
    }
}
int main(){
    Insert(1, "Sanjan");
    Insert(2, "Rahul");
    Insert(3, "Amit");
    for(const auto &i:Emp_detail){
        if (i.first == 2)
        {
            cout<<i.first<<" : "<<i.second<<endl;
        }       
    }
return 0;
}