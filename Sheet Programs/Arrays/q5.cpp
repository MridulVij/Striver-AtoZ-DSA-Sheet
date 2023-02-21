// Left Rotate the Array by One

#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(int arr[], int n){
    int temp=arr[0];
   for(int i=0; i<n; i++){
    arr[i]=arr[i+1];
   }
   arr[n-1]=temp;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   // TC - O(n)
   // SC - O(1)
 }
};

int main()
{
Solution s;
int a[]={1,2,3,4,5,6,7};
int n=sizeof(a)/sizeof(a[0]);
s.function(a,n);

return 0;
}
