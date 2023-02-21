// Remove Duplicates in-place from Sorted Array

#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(vector<int>v){
    if(v.size()==0) cout<<0;
    int i=0;
    for(int j=1; j<v.size(); j++){
        if(v[i]!=v[j]){
            i++;
           v[i]=v[j];
        }
    }
    int ans=i+1;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    }
 };
 //  Brute force Approach
//  void function(vector<int>v){
//     set<int>s;
// for(int i=0; i<v.size(); i++){
//         s.insert(v[i]);
// }
// for(auto i:s){
//         cout<<i<<" ";
// }
// }

int main()
{
Solution s;
// Array is sorted but remove duplicates! from here!
vector<int>v={90, 100, 12, 34, 2, 56,4, 89, 67, 2 ,0};
s.function(v);

return 0;
}
