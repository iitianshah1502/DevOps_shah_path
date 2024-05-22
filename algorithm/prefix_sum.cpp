// we have to calculate the sum of array from this index to another index
#include<bits/stdc++.h>
using namespace std;
const int M = 1e5+10;
int a[M];
int pf[M];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i] = pf[i-1]+a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        long long sum = 0;
       cout<<pf[r]-pf[l-1]<<endl;

    }
}
// time complexity is O(n)+O(q*n); // so we are going to optimise the code o(n) using prefux sum
// one optimization is basically we are remove a for function into a for function
// so we can think about that condition also