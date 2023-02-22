// Maximum Consecutive Ones

#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 void function1(int arr[], int n){
    int count=0;
    int maxCount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1)
            count++;
        else
            if(count>maxCount){
                maxCount=count;
            }
    }
    cout<<count<<endl;;
 }


 void function2(int arr[], int n, int m){
    int zerocnt=0,i=0,ans=0,j=0;
        for(j=0;j<n;j++)
         {
             if(arr[j]==0)
               zerocnt++;
             while(zerocnt>m){
                   if(arr[i]==0)
                    zerocnt--;
                     i++;    
               }
               ans=max(ans,j-i+1);       
         }
         cout<<ans<<endl;
 }
};

int main()
{
Solution s;
int a[]={1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
int n=sizeof(a)/sizeof(a[0]);
int m=1;

// This Code is used to count 1's from whole array by ignoring 0's from array
s.function1(a,n);
// This Code is used to count 1's by checking 
s.function2(a,n,m);

return 0;
}
