#include<bits/stdc++.h>
using namespace std;
int reverse_arr(int l,int r,int arr[]){
    //base case
    if(l>=r) return 1;
    swap(arr[l],arr[r]);
    return reverse_arr(l+1,r-1,arr);
}
// in the above code we are using two pointer
int reversed_arr(int i,int n,int arr[]){
    //base case
    if(i>=n/2) return 1;
    swap(arr[i],arr[n-i-1]);
    return reversed_arr(i+1,n,arr);
}

int main(){
    int arr[] ={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    reversed_arr(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}