
#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 bool function(int n, string s){
    if(n>=s.size()/2) return true;
    if(s[n] != s[s.size()-n-1]) return false;
    return function(n+1, s);
 }

};

int main()
{
Solution s;
string a= "madam";
string b= "nitin";
int n=0;
int ans = s.function(n,a);
if(ans == 1)
    cout<<"The String "<<a<<" is a Palindrome using recursion";
else
    cout<<"The String "<<a<<" Not a Palindrome even using recursion";


return 0;
}
