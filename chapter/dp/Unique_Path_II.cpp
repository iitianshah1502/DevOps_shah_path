#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
int UniquePathII(int m,int n,vvi &dp,vvi &arr)
{
    // base case
    if(m>0 && n>0&& arr[m][n]==-1) return 0;
    if(m==0&&n ==0) return 1;
    if(m<0||n<0) return 0;
    if(dp[m][n]!=-1) return dp[m][n];
    // recursion
    long long up  = UniquePathII(m-1,n,dp,arr);
    long long left = UniquePathII(m,n-1,dp,arr);
    return dp[m][n] = up+left;
}
int main(){
    int m=3;
    int n = 2;
    vvi dp(m,vi(n,-1));
    
}
