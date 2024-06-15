#include <bits/stdc++.h>
using namespace std;
vector<int> NSL(vector<int> &arr, int n)
{
    vector<int> ans;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
            ans.push_back(-1);
        else if (s.size() > 0 && s.top() < arr[i])
            ans.push_back(s.top());
        else if (s.size() > 0 && s.top() >= arr[i])
        {
            while (s.size() > 0 && s.top() >= arr[i])
            {
                s.pop();
            }

            if (s.size() == 0)
                ans.push_back(-1);
            else
                ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int >ans = NSL(v,n);
    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    return 0;
}