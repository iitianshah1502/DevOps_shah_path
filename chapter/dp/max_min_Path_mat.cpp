#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
int minPath(int i,int j,vvi &mat,vvi &dp)
{
    int n = mat.size();
    // base case
    if(j<0 || j>=n) return INT_MAX;
    if(i==0) return mat[0][j];
    if(dp[i][j]!=-1) return dp[i][j];
    // recursion
    int up = mat[i][j]+minPath(i-1,j,mat,dp);
    int leftdiogonal = mat[i][j] +minPath(i-1,j-1,mat,dp);
    int rightdiagonal = mat[i][j]+minPath(i-1,j+1,mat,dp);
    return dp[i][j] = min(up,leftdiogonal,rightdiagonal);
}
