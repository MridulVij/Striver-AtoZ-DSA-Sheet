// Largest element in an Array!
#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(int arr[], int n){
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"The maximum element in array is: "<<max;
 }
};

int main()
{
Solution s;
int A[]={1,2,3,3,56,0,789};
// Checking size of Array
int size=sizeof(A)/sizeof(A[0]);
s.function(A,size);

return 0;
}
