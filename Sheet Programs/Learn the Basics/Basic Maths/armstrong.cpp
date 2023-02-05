
#include <bits/stdc++.h>
using namespace std;

class Solution{
int sum=0;
int revNum=0;
 public:
 void function(int n){
     // copy variable
    int dup=n;
    // program starts from here
    while(n>0){
        int digit = n%10;
        sum = sum+(digit*digit*digit);
        n/=10;
        revNum = (revNum*10)+digit;
    }
    if(dup==sum) cout<<sum<<" = is Armstrong Number";
    else cout<<sum<<" = is Not an Armstrong Number";
 }

};

int main()
{
Solution s;
s.function(371);

return 0;
}
