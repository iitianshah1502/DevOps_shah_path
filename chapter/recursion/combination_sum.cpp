#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        // base case
        if (ind == arr.size())
        {
            if (target == 0)
                ans.push_back(ds);
            return;
        }
        // pickup condtion means isme ham same element ko lete
        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            findCombination(ind, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }
        // not pickup the same element
        findCombination(ind + 1, target, arr, ans, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> candidates = {2, 3, 6, 7}; // Example input
    int target = 7; // Example target
    vector<vector<int>> result = sol.combinationSum(candidates, target);

    // Printing the result
    cout << "All combinations that sum up to " << target << " are:\n";
    for (auto combination : result)
    {
        cout << "[";
        for (int i = 0; i < combination.size(); ++i)
        {
            cout << combination[i];
            if (i != combination.size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
