// Second Largest & Second Smallest element in an Array!
#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
int secondSmallest(int arr[],int n){
    if(n<2) return -1;
    int small = INT_MAX, second_small = INT_MAX, i;
    for(i = 0; i < n; i++) {
       if(arr[i] < small){
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
          second_small = arr[i];
    }
   return second_small;
}

int secondLargest(int arr[],int n){
	if(n<2) return -1;
    int large=INT_MIN,second_large=INT_MIN,i;
    for (i = 0; i < n; i++){
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }
    return second_large;                
}

void function(int Arr[], int n){
      cout<<"Second Smallest Number is: "<<secondSmallest(Arr, n)<<endl;
      cout<<"Second Largest Number is: "<<secondLargest(Arr, n)<<endl;
}
};

int main()
{
Solution s;
int A[]={6,3,6,2,7,3,7,3,6,4,9,4,7445,3,64,6};
int size=sizeof(A)/sizeof(A[0]);
s.function(A,size);

return 0;
}
