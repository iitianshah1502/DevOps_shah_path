#include <bits/stdc++.h>
using namespace std;
long long maximumHappinessSum(vector<int> &happiness, int k)
{
    int n = happiness.size();
    sort(happiness.begin(),happiness.end());
    reverse(happiness.begin(),happiness.end());
    long long ans =0;
    for(int i=0;i<k;i++){
        ans +=max(0,happiness[i]-i);
    }
    return ans;
}
