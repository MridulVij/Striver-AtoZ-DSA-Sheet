
#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 void function(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
        cout<<"This numbers is Divisible by: "<<n;
 }

};

int main()
{
Solution s;
s.function(36);

return 0;
}
