// Check is the array is sorted or not!
#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 int function(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
 }
};

int main()
{
Solution s;
int A[]={1,2,3,4,5,6,7,8,9};
// checking the size of static array/ normal array
int S=sizeof(A)/sizeof(A[0]);
int ans=s.function(A,S);
if(ans==1)
cout<<"Array is Sorted!";
else
cout<<"Array is Not Sorted!";

return 0;
}
