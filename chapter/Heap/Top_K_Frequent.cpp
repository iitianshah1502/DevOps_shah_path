#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;
using vi = vector<int>;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    // Minimum heap because we want to find the most frequent elements
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    for (auto &pair : mp)
    {
        pq.push({pair.second, pair.first});
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    vi ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    reverse(ans.begin(), ans.end()); // Reverse to get elements in descending order of frequency
    return ans;
}
int main()
{
    vi nums = {1,1,1,2,2,3};
    int k = 2;
    vi ans = topKFrequent(nums,k);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}
