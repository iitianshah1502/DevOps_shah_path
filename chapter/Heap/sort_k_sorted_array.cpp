#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

vi SortK(vi &arr, int k) {
    int n = arr.size();
    // minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    vi ans;
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main()
{
    int k = 3;
    vi a = {6,5,3,2,8,10,9};
    vi ans = SortK(a,k);
    for(auto it  :  ans){
        cout<<it<<" ";
    }
    return 0;

}

