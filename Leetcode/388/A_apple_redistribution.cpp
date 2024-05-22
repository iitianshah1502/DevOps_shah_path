#include <bits/stdc++.h>
using namespace std;
int minimumBoxes(vector<int> &apple, vector<int> &capacity)
{
    int n = apple.size();
    int m = capacity.size();
    sort(capacity.begin(),capacity.end());
    int sum = accumulate(apple.begin(),apple.end(),0);
    int ans = 0;
    for(int i=m-1;i>=0;i--){
        if(sum<=0) break;
        ans++;
        sum -=capacity[i];
    }
    return ans;
}