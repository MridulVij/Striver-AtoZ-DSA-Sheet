
#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 void function(int l, int r, int Arr[]){
    if(l>=r/2) return;
    cout<<swap(Arr[l], Arr[r-l-1]);
    function(l+1, r, Arr);
 }

};

int main()
{
Solution s;
int A[10]={10,20,30,40,50,60,70,80,90,100}, l=0;
int r = A.size();
s.function(l,r,A);

for(int i=0; i<r; i++){
    cout<<A[i];
}


return 0;
}
