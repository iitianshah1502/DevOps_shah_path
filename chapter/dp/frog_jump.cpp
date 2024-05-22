#include <bits/stdc++.h>
using namespace std;
int frog(int ind, vector<int> &arr, vector<int> &dp)
{
    // base case
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int left = frog(ind - 1, arr, dp) + abs(arr[ind] - arr[ind - 1]);
    int right = INT_MAX; // because some time right case not happen
    if(ind>1)
    right = frog(ind - 2, arr, dp) + abs(arr[ind] - arr[ind - 2]);
    return dp[ind] = min(left, right);
}
int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
        cin >> height[i];

    vector<int> dp(n + 1, -1);
    cout << frog(n-1, height, dp);
    return 0;
}