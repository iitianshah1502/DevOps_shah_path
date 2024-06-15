#include<bits/stdc++.h>
using namespace std;
int KthSmallest(vector<int>v,int k)
{
    int n = v.size();
    // maximum heap
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(v[i]);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
}
int main(){
    vector<int>v = {7,10,4,3,20,15};
    int k = 3;
    cout<<KthSmallest(v,k);
    return 0;

}