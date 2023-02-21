// Rotate array by K elements
// pending
#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(int arr[], int k, int n){
    int i;
    for(i=0; i<=n; i++){
        arr[i]=arr[i+k];
    }
    for(int j=0; j<=k-1; j++){
        arr[i+1]=arr[j];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 }
};

int main()
{
Solution s;
int a[]={1,2,3,4,5,6,7};
int n=sizeof(a)/sizeof(a[0]);
int k=2;
s.function(a,k,n);
//s.function();

return 0;
}
