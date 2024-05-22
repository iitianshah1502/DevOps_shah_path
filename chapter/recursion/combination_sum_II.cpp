#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        // base condtion
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        // recursive function
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            findCombination(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int>v = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>>resutls = sol.combinationSum2(v,target);

    
}