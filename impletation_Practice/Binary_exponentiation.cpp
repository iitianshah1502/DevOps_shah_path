#include<bits/stdc++.h>
using namespace std;
// recursion  approach
// long long binpow(long a,long b){
//     if(b==0) return 1;
//     long long res = binpow(a,b/2);
//     if(b%2==0){
//         return res*res;
//     }
//     else{
//         return res*res*a;
//     }
// }
// 2nd approach bit manupulation apporoach
long long bitpow(long long a, long long  b,long long m){
    long long ans = 1;
    while(b>0){
        if(b&1)
        ans = (ans*a)%m;
        a = (a*a)%m;
        b>>=1;
    }
    return ans;
}
int main(){
    long long a ,b;
    long long m = 1e9+9;
    cin>>a>>b;
    cout<<bitpow(a,b,m)<<endl;
}