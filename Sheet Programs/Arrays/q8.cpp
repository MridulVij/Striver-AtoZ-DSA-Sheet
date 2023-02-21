// Union of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(int arr1[], int arr2[], int n, int m){
    vector<int>vt;
    set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr1[i]);
    }
    for(int i=0; i<m; i++){
        s.insert(arr2[i]);
    }
    int i=0;
    for(auto it:s){
        vt.push_back(it);
        cout<<vt[i++]<<" ";
    }
 }
};

int main()
{
Solution s;
// Set is used as refining the duplicates from both arrays --> a1, a2
int a1[]={1,2,3,4,5};
int a2[]={1,2,3,6,90,124};
int n=sizeof(a1)/sizeof(a1[0]);
int m=sizeof(a2)/sizeof(a2[0]);
s.function(a1, a2, n, m);

return 0;
}
        
