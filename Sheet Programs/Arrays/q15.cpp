
#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
 vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X){
     int key=0;
        vector<pair<int,int>>pr;
        int i,j;
        for(i=0; i<N; i++){
            for(j=0; i<M; j++){
                key=A[i]+A[j];
                if(key==X){
                    pr.push_back(make_pair(A[i], B[j]));
                }   
            }
        }
        return pr;
    }
};

int main()
{
Solution s;
int A[]={1, 2, 4, 5, 7};
int B[]={5, 6, 3, 4, 8};
int N=5;
int M=5;
int X=9;
vector<pair<int,int>> vr = s.allPairs(A, B, N, M, X);
int n=vr.size();
for(int i=0; i<n; i++){
    cout<<vr[i].first<<" "<<vr[i].second<<" ";
}


return 0;
}