#include<bits/stdc++.h>
using namespace std;
int fun(int day,int last,vector<vector<int>>&matrix,vector<vector<int>>&dp)
{
    // base case
    if(day == 0)
    {
        int maxi =0;
       for(int i=0;i<=2;i++)
       {
        if(i!=last)
        {
            maxi = max(maxi,matrix[0][i]);
        }
       }
       return dp[day][last] = maxi;
    }
    if(dp[day][last]!=-1) return dp[day][last];
    // recursion function
    int maxi = 0;
    for(int i=0;i<=2;i++)
    {
        if(i!=last)
        {
            int Acitivity = matrix[day][i]+fun(day-1,i,matrix,dp);
            maxi = max(maxi,Acitivity);
        }
        
    }
    return dp[day][last] = maxi;
}
int main() {
    vector<vector<int>>points = {{10,40,70},{20,50,80},{30,60,90}};
      int n = points.size(); 
    vector<vector<int>>dp(n,vector<int>(4,-1));
  cout << fun(n-1,3,points,dp);
}
// Time Complexity: O(N*4*3)
// Space Complexity: O(N) + O(N*4)