
#include <bits/stdc++.h>
using namespace std;

class Solution{
int ans=0;
 public:
 void function(int n){
     // copy variable
     int dup = n;
     // program start from here
    while(n!=0){
        int digit = n%10;
        ans = (ans*10)+digit;
        n/=10;
    }
    if(dup==ans) cout<<"Palindrome";
    else cout<<"Not a Palindrome";
 }

};

int main()
{
Solution s;
s.function(123);

return 0;
}
