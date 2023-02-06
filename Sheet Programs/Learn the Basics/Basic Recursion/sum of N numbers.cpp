
#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 int function(int n){
     if(n==0) return 0;
     return n+function(n-1);

 }

};

int main()
{
Solution s;
cout<<"Sum of N numbers though Recursion is: "<<s.function(5);

return 0;
}
