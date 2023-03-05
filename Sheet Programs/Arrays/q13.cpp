// Find the Missing Number

#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function(int A[], int N){
    // Your code goes here
    int sum = 0;
    for (int i=0; i<N-1; i++) {
        sum += A[i];
        
    }
    
    cout<<((N*(N+1)/2) - sum)<<" "<<endl;
 }
};

int main()
{
Solution s;
int A[]={1,4,3,5};
int n=sizeof(A)/sizeof(A[0]);
s.function(A, n);

return 0;
}
