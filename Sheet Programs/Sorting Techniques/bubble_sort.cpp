#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 void printSortedArray(vector<int>v, int n){
    for(int i=0; i<n; i++){
        cout<<v.at(i)<<" ";
    }
 }
 // Bubble Sort Algorithm!
 void function(vector<int>v, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    // Printing Sorted Array!
    printSortedArray(v, n);
 }
 
};

int main()
{
Solution s;
//int A[10]={10, 30, 7, 2, 3, 78, 67, 34, 56, 8};
vector<int>v = {10, 30, 7, 2, 3, 78, 67, 34, 56, 8};
// Size of Array Declaration!
//int size = sizeof(v)/sizeof(v[0]);
int size = v.size();
s.function(v, size);

return 0;
}
