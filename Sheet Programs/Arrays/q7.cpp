// Move all Zeros to the end of the array

#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(int arr[], int n){
    // temporary array --> temp[]
    int temp[n], k=0;
	for(int i=0; i<n; i++){
	    if(arr[i]!=0){
	        temp[k]=arr[i];
	        k++;
        }
	}
	while(k<n){
        temp[k]=0;
	    k++;
	}
	for(int i=0; i<n; i++){
	    arr[i]=temp[i];
        cout<<arr[i]<<" ";
    }
 }
};

int main()
{
Solution s;
int a[]={3,4,5,0,0,0,0,0,2,57,0,0};
int n=sizeof(a)/sizeof(a[0]);
s.function(a,n);

return 0;
}