#include<iostream>
using namespace std;

int main(){
    int n=0;
    int reverse=0;
    cin>>n;
    int nums = n;
    while(n!=0){
        int digit = n%10;
        reverse = reverse*10+digit;
        nums = n/10;
    }
    cout<<n<<reverse;
}