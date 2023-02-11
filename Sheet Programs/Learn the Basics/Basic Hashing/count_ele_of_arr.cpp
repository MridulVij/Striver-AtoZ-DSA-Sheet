#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;

    // inputing size of array
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){

        // inputing elements of array
        cin>>arr[i];
    }

    map<int,int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int q;
    // inputing no. of queries we want to check
    cin>>q;
    while(q--){
        int num;

        // inputing querie numbers
        cin>>num;
        cout<<mpp[num]<<endl;
    }

    
    return 0;
}

// int main(){
//     int n;

//     // inputing size of array
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){

//         // inputing elements of array
//         cin>>arr[i];
//     }

//     // harsh[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
//     int hash[13]={0};
//     for(int i=0; i<n; i++){

//         // harsh[arr[i]] = harsh[arr[i]] + 1;
//         hash[arr[i]] += 1;
//     }

//     int q;
//     // inputing no. of queries we want to check
//     cin>>q;
//     while(q--){
//         int num;

//         // inputing querie numbers
//         cin>>num;
//         cout<<hash[num]<<endl;
//     }
//     return 0;
// }