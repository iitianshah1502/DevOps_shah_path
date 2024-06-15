#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
vi Kclosest(vector<int>&arr,int k,int x)
{
    // maximum heap with pair
    priority_queue<pair<int,int>>pq;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        pq.push({abs(arr[i]-x),arr[i]});
        if(pq.size()>k) pq.pop();
    }
    vi ans;
    while(!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
