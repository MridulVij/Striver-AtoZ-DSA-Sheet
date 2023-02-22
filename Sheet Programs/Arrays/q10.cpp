// Find the repeating and missing numbers

#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(int arr[], int N){
    int sum = 0;
    for (int i=0; i<N-1; i++) {
        sum += arr[i];
        
    }
    cout<<"The Missing Element is: "<<((N*(N+1)/2)-sum);
 }
};

int main()
{
Solution s;
int a[]={2,3,5,1};
int n=5;
s.function(a,n);

return 0;
}
