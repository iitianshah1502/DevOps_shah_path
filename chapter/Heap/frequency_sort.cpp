#include<bits/stdc++.h>
using namespace std;
using pi = pair<int,int>;
using vi= vector<int>;
vi FreqSort(vi &arr){
    int n = arr.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    priority_queue<pi,vector<pi>,greater<pi>>pq;

    for(auto pair : mp)
    {
        pq.push({pair.second,pair.first});
    }
    vi ans;
    while(!pq.empty())
    {
        int freq  = pq.top().first;
        int ele = pq.top().second;
        for(int i=1;i<=freq;i++){
          ans.push_back(ele);  
        }
    }
    return ans;
}
int main(){

}