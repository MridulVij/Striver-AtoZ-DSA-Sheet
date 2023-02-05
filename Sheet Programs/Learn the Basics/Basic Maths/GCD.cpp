#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 void function(int a,int b){
    while(a>0 && b>0){
        if(a>b)a=a%b;
        else b=b%10;
    }
    if(a==0)cout<<b;
    else cout<<a;
 }

};

int main()
{
Solution s;
s.function(10,30);

return 0;
}
