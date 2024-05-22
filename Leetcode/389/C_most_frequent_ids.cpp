#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<long long> mostFrequentIDs(vector<int> &nums, vector<int> &freq)
{
    priority_queue<pair<ll,ll>>pq; // first - freq and second is num
    unordered_map<ll,ll>mp; // key num and value freq, ya first num and second is freq
    vector<ll>ans;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]] +=freq[i];
        pq.push({mp[nums[i]],nums[i]});
        while(!pq.empty()){
            pair<ll,ll>p = pq.top();
            if(mp[p.second]!=p.first){
                pq.pop();
            }
            else{
                break;
            }
        }
        ans.push_back(pq.top().first);
    }
     return ans;
}
