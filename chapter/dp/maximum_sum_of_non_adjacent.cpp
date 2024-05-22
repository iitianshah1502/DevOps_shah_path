#include<bits/stdc++.h>
using namespace std;
// class Solution {
// private:
    int MaxNonAdd(int ind, vector<int>& nums, vector<int>& dp) {
        // base cases
        if (ind == 0) return nums[ind];
        if (ind == 1) return max(nums[0], nums[1]);
        
        if (dp[ind] != -1) return dp[ind];
        
        int pick = nums[ind] + MaxNonAdd(ind - 2, nums, dp);
        int notpick = MaxNonAdd(ind - 1, nums, dp);
        
        return dp[ind] = max(pick, notpick);
    }

// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 0) return 0;
//         if (n == 1) return nums[0];

//         vector<int> dp(n, -1);
//         return MaxNonAdd(n - 1, nums, dp);
//     }
// };

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int>dp(n+1,-1);
    cout<<MaxNonAdd(n-1,v,dp);
    return 0;
}