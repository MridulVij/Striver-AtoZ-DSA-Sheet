
#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 int function(int n){
     int last=0,secondlast=0;
    if(n<=1) return n;
    last=function(n-1);
    secondlast=function(n-2);
    return last+secondlast;
 }

};

int main()
{
Solution s;
cout<<s.function(5);

return 0;
}
