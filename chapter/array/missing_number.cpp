#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int temp[n + 1];
    // hashing of zero value order
    for (int i = 0; i <= n; i++)
    {
        temp[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        temp[nums[i] - 1] = 1;
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (temp[i] == 0)
            ans = i + 1;
            break;
    }
    return ans;
}
// TC = O(n)
// SC = O(n)
// optimal approach
int FindMissing(vector<int>&nums)
{
    int n = nums.size();
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans^nums[i];
    }
    for(int i = 1;i<=n;i++)
    {
        ans = ans^i;
    }
    return ans;
}
// TC O(N)
// SC O(1)
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<FindMissing(arr)<<endl;
    return 0;
}