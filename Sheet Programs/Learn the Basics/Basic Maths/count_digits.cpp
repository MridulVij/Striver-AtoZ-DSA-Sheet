#include<bits/stdc++.h>
using namespace std;
// count digits
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<"Total digits in n="<<n<<" is: "<<count;
}
