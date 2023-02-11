// Basic Hashing
#include<iostream>
using namespace std;

int main(){
    int n=5;
    int count=0;
    int key=4;
    int Arr[n]={1,1,2,4,7};
    for(int i=0; i<n; i++){
        if(Arr[i]==key){
            count++;
        }
    }
    cout<<count;
    return 0;
}