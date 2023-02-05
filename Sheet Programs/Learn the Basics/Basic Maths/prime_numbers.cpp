
#include <bits/stdc++.h>
using namespace std;

class Solution{
int count=0;
 public:
 void function(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if((n/i)!=0){
                count++;
            }
        }
    }
        if(count==2) cout<<"Prime Number";
        else cout<<"Not a Prime Number";
 }

};

int main()
{
Solution s;
s.function(50);

return 0;
}
