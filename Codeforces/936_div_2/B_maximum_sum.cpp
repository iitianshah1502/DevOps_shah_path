#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
long long maxisubarraySum(vector<int> &a)
{
    int n = a.size();
    long long sum = 0;
    long long maxi = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxi;
}
void solve()
{
    int n, k; // n is the length of array and k is the no of operation we have to perform
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    // implement the logic in you code
    int answer = maxisubarraySum(a);

    int finalAnswer = (accumulate(a.begin(), a.end(), 0ll) % M + M) % M;

    for (int i = 0; i < k; i++)
    {

        finalAnswer = (finalAnswer + answer) % M;
        answer = (answer * 2) % M;
    }

    cout << finalAnswer << "\n";
}
signed  main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}