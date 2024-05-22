#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precomputation
    int hash[13] = {0}; // this is inialise all the value is zero
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;

            cout<<hash[num]<<endl;
        
    }
    return 0;

}