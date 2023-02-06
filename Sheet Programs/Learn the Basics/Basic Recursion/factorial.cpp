

#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 int function(int n){
     if(n==0)
        // always return 1; because of multiplication time 0 * by N = 0 so thats way always return 1 in factorial or any multiplication program
        return 1;
     // factorial is same as sum of n numbers but here we only want to add * to multiply each iteration
     return n*function(n-1);

 }

};

int main()
{
Solution s;
cout<<"Factorial of N numbers though Recursion is: "<<s.function(10);

return 0;
}
