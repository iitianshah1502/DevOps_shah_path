#include<bits/stdc++.h>
using namespace std;
// method 1 using unorderd_map
int singleNumber(int arr[],int n){
    // umap to find frequency of number
    unordered_map<int,int>fmap;
    for(int i=0;i<n;i++){
        fmap[arr[i]]++;
    }
    for(auto it:fmap){
        // check the frequency is 1 or not
        if(it.second==1) return it.first;
    }
    return -1;
}
// method 2 using bit manipulation
int singleNumbers(int A[],int n) { 
    int ones = 0;
    int twos = 0;
    int common_bit_mask;
    for(int i = 0;i<n;i++){
        twos = twos|(ones & A[i]);
        ones = ones^A[i];
        common_bit_mask=~(ones&twos);
        ones &=common_bit_mask;
        twos &=common_bit_mask;
    }
    return ones;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(auto x: arr) cin>>x;
    cout<<singleNumbers(arr,n);
    return 0;
}
