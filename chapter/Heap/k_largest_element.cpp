#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
void KLargest(vector<int>nums,int k)
{
    int n = nums.size();
    // minimum heap
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(nums[i]);
        if(pq.size()>k) pq.pop();
    }
    vector<int>result;
    while(!pq.empty())
    {
        result.push_back(pq.top());
        pq.pop();
    }
    for(auto it: result)
    {
        cout<<it<<" ";
    }
}
int main(){
    vector<int>v = {1,23,12,9,30,2,50};
    int k =3;
    KLargest(v,k);
    return 0;
}